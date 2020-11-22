#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}
double funcos( double e, double x ){
	double cos=1;
	double abs=1;
	double p=-1;
	for(int i=2;abs>e;){
		double mul=1;
		for(int j=i;j>0;j--){
			mul*=j;
		}
		abs=pow(x,i)/mul;
		cos=cos+p*abs;
		p=p*-1;
		i=i+2;
	}
	return cos;
}
