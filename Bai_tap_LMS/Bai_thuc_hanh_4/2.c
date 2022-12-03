#include <stdio.h>
int main() {
	int N, i;
	printf("Nhap N (0<N<=100): "); scanf("%i",&N);
	if (N > 0 && N <= 100) {
		int A[N];
		for(i = 0; i < N; i++) {
			printf("A[%i] = ", i); scanf("%i", &A[i]);
		}
		printf("Day so:");
		for(i = 0; i < N; i++) {
			printf(" %i", A[i]);
		}
		int max = A[0];
		for (i = 1; i < N; i++) {
			if (A[i] > max) {
				max = A[i];
			}
		}
		printf("\nSo lon nhat cua day so la %i", max);
		int dem = 0;
		int j;
		dem = 0, max = 0;
		for (i = 0; i < N; i++) {
			for (j = 1; ; j++) {
					if (j*j == A[i]) {
						if (A[i] > max) {
							max = A[i];
						}
					}
					if (j*j >= A[i]) {
						break;
					}
			}
		}
		printf("\nSo chinh phuong lon nhat trong day la %i", max);
		max = A[0];
		int tam;
		for (i = 0; i < N; i++) {
			for (j = i + 1; j < N; j++) {
				if (A[j] > A [i]) {
					tam = A[i];
					A[i] = A[j];
					A[j] = tam;
				}
			}
		}
		printf("\nDay giam dan:");
		for (i = 0; i < N; i++) {
			printf(" %i", A[i]);
		}
	}
	return 0;
}
