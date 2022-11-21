#include <stdio.h>

int main() {
	int N, i, j = 0;
	printf("N = "); scanf("%i",&N);
	int A[N];
	for (i = 0; i < N; i++) {
		printf("a[%i] = ",i);
		scanf("%i",&A[i]);	
	}
	printf("Day A =");
	for (i = 0; i < N; i++) {
		printf(" %i", A[i]);
		if (A[i] < 0) j+=1;	
	}	
	printf("\nSo so am trong A: %i", j);
	return 0;
}
