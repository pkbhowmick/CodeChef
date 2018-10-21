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
int main()
{
    ll test;
    sc1(test);
    while(test--)
    {
        ll n;
        sc1(n);
        for(ll i=0;i<n;i++)
        {
            sc1(arr[i]);
        }
        deque<ll>Q;
        Q.push_back(arr[0]);
        ll id=1;
        while(id<n&&Q.back()<=arr[id])
        {
            Q.push_back(arr[id]);
            id++;
        }
        for(ll i=n-1;i>=id;i--)
        {
            Q.push_front(arr[i]);
        }
        sort(arr,arr+n);
        ll ok=1;
        for(ll i=0;i<n;i++)
        {
            if(arr[i]!=Q.front())
            {
                ok=0;
                break;
            }
            Q.pop_front();
        }
        if(ok==0)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
