#include<stdio.h>
int main()
{
    long long int x;
    int i;
    scanf("%lld",&x);
    printf("Prime Factorization of %d is : ",x);

    for(i=2;x>1;i++)
    {
        while(x%i==0)
        {
            printf("%d ",i);
            x = x/i;
        }
    }

    return 0;

}
