
/// generating prime numbers from 1 to n
///Time Complexity -----> O(nloglogn)


#include<iostream>
#include<vector>
using namespace std;

#define maxn 100000

vector <bool> prime(maxn+1,true);

void sieve()
{
    prime[0] = prime[1] = false;

    for(long long i=2;i*i<=maxn;i++)
    {
        if(prime[i])
        {
            for(long long j=i*i;j<=maxn;j+=i)
                prime[j] = false;
        }
    }
}

int main()
{
    sieve();

    cout<<"Prime numbers : ";

    for(int i=1;i<=maxn;i++)
    {
        if(prime[i])
            cout<<i<<" ";
    }

    return 0;
}
