#include<stdio.h>
#include<stdbool.h>
#include<math.h> 
const int N=2000000000;//int范围是21亿，所以可以这样设

bool isPrime(int n){
    if(n==1) return false;
    int sqr=(int)sqrt(1.0*n);
    for(int i=2;i<=sqr;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=2;i<N;i++){
        if(isPrime(i)==true && isPrime(n-i)==true){
            printf("%d = %d + %d",n,i,n-i);
            break;
        }
    }
    return 0;
}
