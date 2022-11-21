#include <stdio.h>
#include <math.h>
int main() {
	int a,b,c;
	printf("a = "); scanf("%i",&a);
	printf("b = "); scanf("%i",&b);
	printf("c = "); scanf("%i",&c);
	float fa = (log10(a*a+4)) / (log10(5)) + 3*exp(a) + pow(a,5);
	float fb = (log10(b*b+4)) / (log10(5)) + 3*exp(b) + pow(b,5);
	float fc = (log10(c*c+4)) / (log10(5)) + 3*exp(c) + pow(c,5);
	printf("Trung binh cong cua f(a), f(b), f(c) la: %.2f", (fa+fb+fb) / 3 );
	
	return 0;
}
