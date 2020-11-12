# include <stdio.h>
# include <math.h>

int main(void) {
	int N, x, y, is = 0;
	scanf("%d", &N);
	
	for (x=1; x<sqrt(N)+1; x++) {
		for (y=x; y<sqrt(N)+1; y++) {
			if (N == x*x+y*y) {
				is = 1;
				printf("%d %d\n", x, y);
			}
		}
	}
	
	if (0 == is) {
		printf("No Solution");
	}
	
	return 0;
}
