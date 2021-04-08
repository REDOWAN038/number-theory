/// Time Complexity ----> O(logn)


#include<iostream>
using namespace std;

long long binpow(long long a,long long b)
{
    long long res = 1;

    while(b)
    {
        if(b%2)
        {
            res*=a;
            b--;
        }

        else
        {
            a*=a;
            b/=2;
        }
    }

    return res;
}

int main()
{
    long long a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    long long ans = binpow(a,b);
    cout<<"Result of "<<a<<"^"<<b<<" = "<<ans<<endl;

    return 0;
}
