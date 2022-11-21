#include <stdio.h>
#include <math.h>
int main() {
	printf("F = 3^n + 5|x| + ln(3x)");
	int n;
	float x;
	printf("\nVoi n = "); scanf("%i",&n);
	printf("    x = "); scanf("%f",&x);
	printf("F = %f", pow(3,n) + 5 * fabs(x) + log(3*x) );
	return 0;
}
