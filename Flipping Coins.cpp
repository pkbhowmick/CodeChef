#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

ll tree[400005];
ll lazy[400005];

void update(ll node,ll b,ll e,ll l,ll r)
{
    if(lazy[node]%2!=0)
    {
        tree[node]=e-b+1-tree[node];
        if(b!=e)
        {
            lazy[node*2]+=lazy[node];
            lazy[node*2+1]+=lazy[node];
        }
        lazy[node]=0;
    }
    if(b>r||e<l)return;
    if(b>=l&&e<=r)
    {
        tree[node]=e-b+1-tree[node];
        if(b!=e)
        {
            lazy[node*2]++;
            lazy[node*2+1]++;
        }
        return;
    }
    ll mid=(b+e)/2;
    update(node*2,b,mid,l,r);
    update(node*2+1,mid+1,e,l,r);
    tree[node]=tree[node*2]+tree[node*2+1];
}
ll query(ll node,ll b,ll e,ll l,ll r)
{
    if(b>r||e<l||b>e)return 0;
    if(lazy[node]%2!=0)
    {
        tree[node]=e-b+1-tree[node];
        if(b!=e)
        {
            lazy[node*2]+=lazy[node];
            lazy[node*2+1]+=lazy[node];
        }
        lazy[node]=0;
    }
    if(b>=l&&e<=r)
    {
        return tree[node];
    }
    ll mid=(b+e)/2;
    ll p1=query(node*2,b,mid,l,r);
    ll p2=query(node*2+1,mid+1,e,l,r);
    return p1+p2;
}
int main()
{
    ll n,q;
    sc2(n,q);
    memset(tree,0,sizeof tree);
    memset(lazy,0,sizeof lazy);

    while(q--)
    {
        ll ty,a,b;
        sc3(ty,a,b);
        a++,b++;
        if(ty==0)
        {
            update(1,1,n,a,b);
        }
        else
        {
            ll now=query(1,1,n,a,b);
            printf("%lld\n",now);
        }
    }
    return 0;
}
