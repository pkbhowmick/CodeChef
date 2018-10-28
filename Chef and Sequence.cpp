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
int main()
{
    ll test;
    sc1(test);
    while(test--)
    {
        ll n,k;
        sc2(n,k);
        for(ll i=1;i<=n;i++)
        {
            ll v;
            sc1(v);
            if(v!=1)
                k--;
        }
        if(k>=0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
