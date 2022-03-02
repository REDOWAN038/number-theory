#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sz 100
const ll mod = 1e9+7;

ll ar[sz+5][sz+5];
ll iden[sz+5][sz+5];

void mul(ll a[][sz+5],ll b[][sz+5],ll dim)
{
    ll res[sz+5][sz+5];
    ll i,j,k;

    for(i=0;i<dim;i++)
    {
        for(j=0;j<dim;j++)
        {
            res[i][j] = 0;

            for(k=0;k<dim;k++)
            {
                ll p = (a[i][k]*b[k][j])%mod;
                res[i][j] = ((res[i][j]%mod)+p)%mod;
            }
        }
    }

    for(i=0;i<dim;i++)
    {
        for(j=0;j<dim;j++)
        {
            a[i][j] = res[i][j];
        }
    }
}

void power(ll arr[][sz+5],ll dim,ll n)
{
    ll i,j;

    for(i=0;i<dim;i++)
    {
        for(j=0;j<dim;j++)
        {
            if(i==j)
                iden[i][j] = 1;
        }
    }

    // iden = iden*arr;

    while(n)
    {
        if(n%2)
        {
            mul(iden,arr,dim);
            n--;
        }

        else
        {
            mul(arr,arr,dim);
            n/=2;
        }
    }

    for(i=0;i<dim;i++)
    {
        for(j=0;j<dim;j++)
        {
            arr[i][j] = iden[i][j];
        }
    }
}

void print(ll dim)
{
    ll i,j;

    for(i=0;i<dim;i++)
    {
        for(j=0;j<dim;j++)
        {
            cout<<ar[i][j]<<" ";
        }

        cout<<endl;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll dim,n,i,j;
    cin>>dim>>n;

    for(i=0;i<dim;i++)
    {
        for(j=0;j<dim;j++)
        {
            cin>>ar[i][j];
        }
    }

    power(ar,dim,n);

    print(dim);
}