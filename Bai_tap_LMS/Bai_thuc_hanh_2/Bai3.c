#include <stdio.h>
#include <math.h>
int main() {
	float x;
	printf("Nhap so thuc x = "); scanf("%f",&x);
	if (x != 1 && x != -1) {
		printf("f(x) = %.3f", (pow(x,3) + x + 1) / (pow(x,2) - 1));
	} else {
		printf("f(x) = 5");
	}
	return 0;
}
