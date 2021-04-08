/// finding gcd and lcm of two numbers
/// Time Complexity ----> O(log(min(a,b)))


#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main()
{
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;

    int d = gcd(a,b);
    int l = (a/d)*b;

    cout<<"GCD of ("<<a<<","<<b<<") = "<<d<<endl;
    cout<<"LCM of ("<<a<<","<<b<<") = "<<l<<endl;
    return 0;
}
