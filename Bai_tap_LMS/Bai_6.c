#include <stdio.h>
#include <math.h>
int main() {
	#define PI 3.14159
	float a,b,goc_c;
	printf("Nhap do dai canh a = "); scanf("%f",&a);
	printf("Nhap do dai canh b = "); scanf("%f",&b);
	printf("Nhap do dai goc xen giua c = "); scanf("%f",&goc_c);
	printf("\nDien tich tam giac ABC la: %g ",0.5 * a * b * sin(goc_c * PI / 180));
	return 0;
}
