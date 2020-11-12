#include<stdio.h>
int main()
{
    char s;
    int b=0,d=0,l=0,o=0;

    for(int i=0;i<10;i++){
    	s=getchar();
		if(s==' '||s=='\n'){
			b++;
		}else if(s>='0'&&s<='9'){
			d++;
		}else if((s>='a'&&s<='z')||(s>='A'&&s<='Z')){
			l++;
		}else{
			o++;
		}
	}
    printf("letter = %d, blank = %d, digit = %d, other = %d",l,b,d,o);
    return 0;
}
