#include<stdio.h>

int gcd(int a,int b){//最大公约数，用的辗转相除法
    if(b==0) return a;
    else return gcd(b,a%b);
}

int main(){
    int m,n,d;
    scanf("%d %d",&m,&n);
    d=gcd(m,n);
    printf("%d %d",d,m*n/d);//m*n/d是最小公倍数，两个数相乘除最大公约数
    //是最小公倍数
    return 0;
}
