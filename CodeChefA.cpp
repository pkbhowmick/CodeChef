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
map<char,ll>mp;
map<string,ll>mp2;
int main()
{
    mp['d']=1;
    mp['f']=1;
    mp['j']=2;
    mp['k']=2;
    ll test;
    sc1(test);
    while(test--)
    {
        mp2.clear();
        ll n;
        sc1(n);
        ll ans=0;
        while(n--)
        {
            ll now=0;
            string str;
            cin>>str;
            if(mp2.count(str)>0)
            {
                ans+=mp2[str]/2;
                continue;
            }
            ll len=str.size();
            now+=2;
            ll mode=mp[str[0]];
            for(ll i=1;i<len;i++)
            {
                if(mode==mp[str[i]])
                    now+=4;
                else
                    now+=2;

                mode=mp[str[i]];
            }
            ans+=now;
            mp2[str]=now;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
