#include <stdio.h>
#include <math.h>
int main() {
	float x;
	printf("Voi x = "); scanf("%f",&x);
	printf("F = %f", pow(x,5) + 5 * pow(x, 5/3.) - 6);
	return 0;
}
