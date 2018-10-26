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
ll h[100005];
ll c[100005];
int main()
{
    ll test;
    sc1(test);
    while(test--)
    {
        set<ll>S;
        ll n,m;
        sc2(n,m);
        for(ll i=1;i<=n;i++)
        {
            sc1(h[i]);
        }
        for(ll i=1;i<=n;i++)
        {
            sc1(c[i]);
        }
        ll now=h[n];
        S.insert(c[n]);
        for(ll i=n-1;i>=1;i--)
        {
            if(h[i]>now)
            {
                S.insert(c[i]);
                now=h[i];
            }
        }
        ll ans=S.size();
        printf("%lld\n",ans);
    }
    return 0;
}
