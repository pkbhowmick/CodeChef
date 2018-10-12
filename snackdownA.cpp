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
ll arr[1000006];
int main()
{
    ll test;
    sc1(test);
    while(test--)
    {
        ll n,k;
        sc2(n,k);
        for(ll i=0;i<n;i++)
        {
            sc1(arr[i]);
        }
        sort(arr,arr+n,greater<int>() );
        ll mn=arr[k-1];
        ll ans=0;
        for(ll i=0;i<n;i++)
        {
            if(arr[i]>=mn)
                ans++;
            else
                break;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
