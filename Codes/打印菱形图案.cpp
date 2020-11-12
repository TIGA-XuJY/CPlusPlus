#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int s=n-1; //¿Õ¸ñÊý
    int m=1;//*Êý
    for(int i=0;i<n;i++){
        for(int j=0;j<s;j++){
            printf(" ");
        }
        s-=2;
        for(int k=1;k<=m;k++){
            if(k==m){
                printf("* \n");
            }else{
                printf("* ");
            }
        }
        if(m==n){
            break;
        }
        m+=2;
    }
    m-=2;
    s=2;
    for(int i=n-2;i>=1;i-=2){
        for(int j=0;j<s;j++){
            printf(" ");
        }
        s+=2;
        for(int j=1;j<=m;j++){
            if(j==m){
                printf("* \n");
            }else{
                printf("* ");
            }
        }
        m-=2;
    }
    return 0;
}
