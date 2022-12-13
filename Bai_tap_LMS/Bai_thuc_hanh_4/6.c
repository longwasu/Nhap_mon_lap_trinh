#include <stdio.h>
int main() {
	int N, i;
	printf("Nhap N (0<N<=100): "); scanf("%i",&N);
	if (N > 0 && N <= 100) {
		int A[N];
		for(i = 0; i < N; i++) {
			printf("A[%i] = ", i); scanf("%i", &A[i]);
		}
		printf("Day xuoi:");
		for(i = 0; i < N; i++) {
			printf(" %i", A[i]);
		}
		printf("\nDay nguoc:");
		for(i = N - 1; i >= 0; i--) {
			printf(" %i", A[i]);
		}
		int dem = 0;
		for (i = 0; i < N; i++) {
			if (A[i] % 2 == 0 && A[i] % 5 == 0) {
				dem++;
			}	
		}
		printf("\nCo %i so chan chia het cho 5 trong day.", dem);
		int j;
		dem = 0;
		for (i = 0; i < N; i++) {
			for (j = 1; ; j++) {
					if (j*j == A[i]) {
						dem++;
					}
					if (j*j >= A[i]) {
						break;
					}
			}
		}
		printf("\nCo %i so chinh phuong trong day", dem);
	}
	return 0;
}
