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
ll mark[100005];
ll arr[100005];
ll cnt[100005];
int main()
{
    ll test;
    sc1(test);
    while(test--)
    {
        memset(mark,0,sizeof mark);
        memset(cnt,0,sizeof cnt);
        ll n;
        sc1(n);
        ll ok=0;
        for(ll i=1;i<=n;i++)
        {
            ll v;
            sc1(v);
            arr[i]=v;
            mark[v]++;
        }
        for(ll i=1;i<=n;i++)
        {
            if(mark[i]>0)
            {
                cnt[arr[i]]++;
                if(cnt[arr[i]]==2)
                {
                    ok=1;
                    break;
                }
            }
        }
        if(ok)
            printf("Truly Happy\n");
        else
            printf("Poor Chef\n");
    }
    return 0;
}
