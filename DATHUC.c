#include <stdio.h>
#include <math.h>
int main() {
	float X,A0,A1,A2,A3,A4;
	printf("X = "); scanf("%f",&X);
	printf("A0 = "); scanf("%f",&A0);
	printf("A1 = "); scanf("%f",&A1);
	printf("A2 = "); scanf("%f",&A2);
	printf("A3 = "); scanf("%f",&A3);
	printf("A4 = "); scanf("%f",&A4);
	printf("f(x) = %g",A0+A1*X+A2*pow(X,2)+A3*pow(X,3)+A4*pow(X,4));
	return 0;
}
