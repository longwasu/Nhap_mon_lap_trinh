#include <stdio.h>
#include <math.h>
int main() {
	#define PI 3.1416
	float r;
	printf("Ban kinh R = "); scanf("%f",&r);
	printf("Chu vi hinh tron la: %g", 2 * PI * r);
	printf("\nDien tich hinh tron la: %g", PI * r * r);
	return 0;
}
