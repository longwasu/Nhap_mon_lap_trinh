#include <stdio.h>
#include <math.h>
int main() {
	float x,y;
	printf("Voi x = "); scanf("%f",&x);
	printf("    y = "); scanf("%f",&y);
	printf("G = %g", x * y - pow(x,2) + x * pow(y,2) - pow(y,3) );
	return 0;
}
