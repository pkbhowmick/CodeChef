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
bool prime[205];
vector<ll>pr;
int main()
{
    //memset(prime,false,sizeof prime);
    pr.pb(2);
    for(ll i=4;i<=200;i+=2)
        prime[i]=true;
    for(ll i=3;i<=200;i+=2)
    {
        if(!prime[i])
        {
            pr.pb(i);
            for(ll j=i+i;j<=200;j+=i)
                prime[j]=true;
        }
    }
    ll sz=pr.size();
    ll arr[205]={0};
    for(ll i=0;i<sz;i++)
    {
        for(ll j=i+1;j<sz;j++)
        {
            if(pr[i]*pr[j]<=200)
            arr[pr[i]*pr[j]]=1;
            //cout<<pr[i]*pr[j]<<endl;
        }
    }
    ll test;
    sc1(test);
    while(test--)
    {
        ll n;
        sc1(n);
        ll ok=0;
        for(ll i=1,j=n-1;i<=j;i++,j--)
        {
            if(arr[i]&&arr[j]){
                printf("YES\n");
                ok=1;
                break;
            }
        }
        if(ok==0)
            printf("NO\n");
    }

    return 0;
}
