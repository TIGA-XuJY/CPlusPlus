#include<stdio.h>

int main(){
    for(int i=1;;i++){
        if(i%5==1 && i%6==5 && i%7==4 && i%11==10){
            printf("%d",i);
            break;//记得加break，不然会超时
        }
    }
    return 0;
}
