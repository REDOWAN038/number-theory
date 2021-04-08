/// finds integer co-efficient x,y such that : ax + by = gcd(a, b)
/// Time Complexity ----> O(log(min(a,b)))


#include<iostream>
using namespace std;

int gcd(int a,int b,int& x,int& y)
{
    if(b==0)
    {
        x = 1;
        y = 0;
        return a;
    }

    int x1,y1;
    int d = gcd(b,a%b,x1,y1);
    x = y1;
    y = x1-y1*(a/b);
    return d;
}

int main()
{
    int a,b,x,y;
    cout<<"Enter two numbers : ";
    cin>>a>>b;

    int d = gcd(a,b,x,y);

    cout<<"GCD of ("<<a<<","<<b<<") = "<<d<<endl;
    cout<<"X = "<<x<<endl;
    cout<<"Y = "<<y<<endl;

    return 0;
}
