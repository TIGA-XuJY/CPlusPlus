#include<stdio.h>
int judge(int n);
 
int main()
{
	int m, i, count = 0;
	scanf("%d", &m);
	for ( i = m-1; i > 1; i--){
	if(judge(i)){
		printf("%6d", i);
   		count++;
  	}
  	if (count == 10)break;
 	}
}

//很重要的找素数函数
int judge(int n)
{
	int i;
 	for (i = 2; i < n; i++)
  	if (n%i == 0)break;
 	if (i == n) return 1;
 	else return 0;
}
