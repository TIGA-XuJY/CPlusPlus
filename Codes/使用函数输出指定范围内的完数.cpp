#include <stdio.h>

int factorsum( int number );
void PrintPN( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
    if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}
int factorsum( int number )
{
    int i,half,sum=1;
    half=number/2;
    for(i=2;i<=half;i++)
    {
        if(number%i==0)sum+=i;
    }
    return sum;
}
void PrintPN( int m, int n )
{
    int i,half,count=0;
    for(;m<=n;m++)
    {
        if(factorsum(m)==m)
        {
            count++;
            half=m/2;
            printf("%d = 1",m);
            for(i=2;i<=half;i++)
            {
                if(m%i==0)printf(" + %d",i);
            }
            printf("\n");
        }
    }
    if(count==0)printf("No perfect number");
}
