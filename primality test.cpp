/// checking a number is prime or not
/// Time Complexity ----> O(sqrt(n))

#include<iostream>
using namespace std;

bool isPrime(int n)
{
    if(n<=1)
        return false;

    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }

    return true;
}

int main()
{
    int n;
    cout<<"Enter any number : ";
    cin>>n;

    if(isPrime(n))
        cout<<n<<" is a prime number.\n";

    else
        cout<<n<<" is not a prime number.\n";
}
