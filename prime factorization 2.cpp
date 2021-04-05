
/// Time Complexity ---? O(nloglogn)


#include<iostream>
using namespace std;
#define sz 100000
int spf[sz+1];

void sieve()
{
    for(int i=1;i<=sz;i++)
        spf[i] = i;

    for(int i=4;i<=sz;i+=2)
        spf[i] = 2;             /// even numbers smallest prime factor is always 2

    for(int i=3;i*i<=sz;i+=2)
    {
        if(spf[i]==i)
        {
            for(int j=i*i;j<=sz;j+=i)       /// marking smallest prime factor for all numbers divisible by i
            {
                if(spf[j]==j)
                    spf[j] = i;
            }
        }
    }
}

void PrimeFactors(int n)
{
    while(n!=1)
    {
        cout<<spf[n]<<" ";
        n/=spf[n];
    }
}

int main()
{
    sieve();
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Prime Factor of "<<n<<" : ";
    PrimeFactors(n);

    return 0;
}
