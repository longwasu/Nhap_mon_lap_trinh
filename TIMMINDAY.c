#include <stdio.h>

int main() {
	int N, i;
	printf("N = "); scanf("%i",&N);
	float A[N], min;
	for (i = 0; i < N; i++) {
		printf("a[%i] = ",i);
		scanf("%f",&A[i]);	
	}
	min = A[0];
	for (i = 0; i < N; i++) {
		if(A[i] < min)
		min = A[i];	
	}	
	printf("Gia tri nho nhat trong A: %g", min);
	
	return 0;
}
