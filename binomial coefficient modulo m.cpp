#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sz 1000000

ll fact[sz+5];
const ll mod = 1e9+7;

ll bigmod(ll a,ll n)
{
    ll res = 1;

    while(n)
    {
        if(n%2)
        {
            res = (res*a)%mod;
            n--;
        }

        else
        {
            a = (a*a)%mod;
            n/=2;
        }
    }

    return res;
}

ll ncr(ll n,ll k)
{
    ll res = fact[n];
    res = ((res%mod) * (bigmod(fact[k],mod-2))%mod)%mod;
    res = ((res%mod) * (bigmod(fact[n-k],mod-2))%mod)%mod;
    return res;
}

void calc()
{
    fact[0] = fact[1] = 1;

    for(ll i=2;i<=sz;i++)
        fact[i] = ((fact[i-1]%mod) * (i%mod))%mod;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    calc();

    ll t,cs=1;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        cout<<"Case "<<cs++<<": "<<ncr(n,k)<<endl;
    }
}