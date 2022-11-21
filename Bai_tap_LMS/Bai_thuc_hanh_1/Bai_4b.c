#include <stdio.h>
#include <math.h>
int main() {
	float a,b,c;
	printf("Nhap do dai 3 canh cua tam giac: \na = "); scanf("%f",&a);
	printf("b = "); scanf("%f",&b);
	printf("c = "); scanf("%f",&c);
	float p = (a + b + c) / 2;
	printf("Dien tich tam giac S = %g",sqrt(p * (p-a) * (p-b) * (p-c)));
	return 0;
}
 
