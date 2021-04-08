/// Time Complexity ----> O(logn)


#include<iostream>
using namespace std;

long long binpow(long long a,long long b,long long m)
{
    long long res = 1;

    while(b)
    {
        if(b%2)
        {
            res = (res*a)%m;
            b--;
        }

        else
        {
            a = (a*a)%m;
            b/=2;
        }
    }

    return res;
}

int main()
{
    long long a,b,m;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"Enter modulo value : ";
    cin>>m;
    long long ans = binpow(a,b,m);
    cout<<"Result of ("<<a<<"^"<<b<<")%"<<m<<" = "<<ans<<endl;

    return 0;
}

