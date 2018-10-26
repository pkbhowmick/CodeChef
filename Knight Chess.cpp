#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;
//ios_base::sync_with_stdio(false);
//cin.tie(NULL);
ll dx[]= {2,2,1,1,-1,-1,-2,-2};
ll dy[]= {1,-1,-2,2,-2,2,1,-1};
ll kx[]={1,1,-1,-1,-1,1,1,-1};
ll ky[]={1,-1,1,-1,1,1,-1,-1};
int main()
{
    ll test;
    sc1(test);
    while(test--)
    {
        ll n;
        sc1(n);
        map< pair<ll,ll>, ll>mp;
        for(ll i=1; i<=n; i++)
        {
            ll a,b;
            sc2(a,b);
            mp[{a,b}]=1;
            for(ll j=0; j<8; j++)
            {
                ll aa=a+dx[j];
                ll bb=b+dy[j];
                mp[{aa,bb}]=1;
            }
        }
        ll x,y;
        sc2(x,y);
        ll ok=1;
        if(mp.count({x,y})==0)
        {
            printf("NO\n");
            ok=0;
        }
        for(ll i=0; i<8&&ok; i++)
        {
            ll xx=x+kx[i];
            ll yy=y+ky[i];
            if(mp.count({xx,yy})==0)
            {
                printf("NO\n");
                ok=0;
                break;
            }
        }
        if(ok)
        {
            printf("YES\n");
        }
    }
    return 0;
}
