#include <stdio.h>
int main() {
	int N, i;
	printf("N = "); scanf("%i",&N);
	float A[N];
	for (i = 0; i < N; i++) {
		printf("A[%i] = ",i);
		scanf("%f",&A[i]);	
	}
	printf("Cac phan tu o vi tri chan:");
	for (i = 0; i < N; i+=2) {
		printf(" %g", A[i]);
		
	}	
	
	return 0;
}
