#include <stdio.h>

int main() {
	int N, i, j = 0, max;
	printf("N = "); scanf("%i",&N);
	int A[N];
	for (i = 0; i < N; i++) {
		printf("a[%i] = ",i);
		scanf("%i",&A[i]);	
	}
	
	max = A[0];
	for (i = 0; i < N; i++) {
		if (A[i] > max)
			max = A[i];
	}			
	printf("Gia tri lon nhat cua A: %i\n",max);	
	for (i = 0; i < N; i++) {
		if (A[i] == max) {
			j++;}
	}
	printf("So phan tu co gia tri lon nhat: %i\n", j);
	return 0;
}
