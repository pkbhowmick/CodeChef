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
ll arr[100005];
ll cum[100005];
int main()
{
    ll test;
    sc1(test);
    while(test--)
    {
        ll n;
        sc1(n);
        for(ll i=1;i<=n;i++)
        {
            sc1(arr[i]);
        }
        cum[0]=0;
        for(ll i=1;i<=n;i++)
            cum[i]=arr[i]+cum[i-1];
        ll jon=1;
        ll ans=0;
        while(jon<n)
        {
            jon+=cum[jon];
            ans++;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
