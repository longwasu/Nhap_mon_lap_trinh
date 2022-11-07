#include <stdio.h>
#include <math.h>
int main() {
	float A, B, C;
	printf("A = "); scanf("%f",&A);
	printf("B = "); scanf("%f",&B);
	printf("C = "); scanf("%f",&C);
	printf("X = ");
	if (A <= B && A >= C || A >= B && A <= C ) {
		printf("%g",A);
	}
	else if (B >= A && B <= C  || B <= A && B >= C )  {
		printf("%g",B);
	}	
	else {
		printf("%g",C);
	}
	return 0;
}
