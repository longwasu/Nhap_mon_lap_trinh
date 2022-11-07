#include <stdio.h>
#include <math.h>
int main() {
	int a, b, c;
	printf("Nhap a = ");	scanf("%i",&a);
	printf("Nhap b = ");	scanf("%i",&b);
	printf("Nhap c = ");	scanf("%i",&c);
	(b <= c) ? printf("Y = %g", pow(a,2) + 3*a -1) : printf("Y = 0");
	return 0;
}
