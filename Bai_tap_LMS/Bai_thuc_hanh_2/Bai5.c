#include <stdio.h>
#include <math.h>
int main() {
	float x, y;
	printf("Nhap so thuc x = "); scanf("%f",&x);
	printf("Nhap so thuc y = "); scanf("%f",&y);
	printf("f(x,y) = %g", (log10(pow(x,2)+1)) / (log10(3)) + pow(y,3) + sqrt(pow(x*y,2)+1) + 3*exp(x) );
	
	return 0;
}
