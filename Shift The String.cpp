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
string P,T;
ll pi[1000006];
void prefix()
{
    ll now;
    pi[0]=now=-1;
    ll len=P.size();
    for(ll i=1;i<len;i++)
    {
        while(now!=-1&&P[now+1]!=P[i])
            now=pi[now];
        if(P[now+1]==P[i])
            pi[i]=++now;
        else
            pi[i]=now=-1;
    }
}

ll kmp()
{
    ll now=-1;
    ll n=T.size();
    ll m=P.size();

    ll mx=-1;
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        while(now!=-1&&P[now+1]!=T[i])
            now=pi[now];
        if(P[now+1]==T[i]){
            ++now;
            if(now>mx)
            {
                mx=now;
                ans=(i-now)%n;
            }
        }
        else
            now=-1;
        if(now==m-1)
            break;
    }
    return ans;
}
int main()
{
    ll n;
    sc1(n);
    cin>>P>>T;
    T=T+T;
    prefix();
    ll ans=kmp();

    if(ans==-1)
    {
        printf("0\n");
    }
    else
        printf("%lld\n",ans);
    return 0;
}
