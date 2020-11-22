#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );

int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}
int fib( int n ){
	int s;
	if(n==1||n==2) s=1;
	else
	  s=fib(n-1)+fib(n-2);
	return s;	
}
void PrintFN( int m, int n ){
	int i=1,count,index=0,flgh=0;
	while(fib(i)<10000)
	i++;
	count=i;
	for(i=1;i<=count;i++){
		if(fib(i)>=m&&fib(i)<=n){
			flgh=1;
			index++;
			if(index==1) 
			     printf("%d",fib(i));
			else
			     printf(" %d",fib(i));
		}
	}
	if(!flgh) printf("No Fibonacci number");
}
