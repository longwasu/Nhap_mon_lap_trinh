#include <stdio.h>
#include <math.h>
int main() {
	float x;
	printf("Nhap so thuc x = "); scanf("%f",&x);
	printf("f(x) =  %.2f", (3*exp(2*x)-pow(x,3)+1) / (fabs(x)+1) );
	
	return 0;
}
