#include<stdio.h>

int gcd(int a,int b){//���Լ�����õ�շת�����
    if(b==0) return a;
    else return gcd(b,a%b);
}

int main(){
    int m,n,d;
    scanf("%d %d",&m,&n);
    d=gcd(m,n);
    printf("%d %d",d,m*n/d);//m*n/d����С����������������˳����Լ��
    //����С������
    return 0;
}
