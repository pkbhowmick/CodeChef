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
ll brr[100005];
int main()
{
    ll test;
    sc1(test);
    while(test--)
    {
        ll n;
        sc1(n);
        for(ll i=1;i<=n;i++)
            sc1(arr[i]);
        for(ll i=1;i<=n;i++)
            sc1(brr[i]);

        ll ok=1;
        for(ll i=1;i<=n-2;i++)
        {
            if(arr[i]>brr[i])
            {
                ok=0;
                break;
            }
            else if(arr[i]<brr[i])
            {
                ll now=brr[i]-arr[i];
                arr[i+1]+=now*2;
                arr[i+2]+=now*3;
                arr[i]=brr[i];
            }
        }
        for(ll i=1;i<=n;i++)
        {
            if(arr[i]!=brr[i])
            {
                ok=0;
                break;
            }
        }
        if(ok==0)
            printf("NIE\n");
        else
            printf("TAK\n");
    }
    return 0;
}
