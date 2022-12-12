#include <stdio.h>
int main() {
	int N, i;
	printf("Nhap N (0<N<=100): "); scanf("%i",&N);
	if (N > 4 && N < 20) {
		int A[N];
		for(i = 0; i < N; i++) {
			printf("A[%i] = ", i); scanf("%i", &A[i]);
			
		}
		printf("Day so:");
		for(i = 0; i < N; i++) {
			printf(" %i", A[i]);
		}
		
		int dem = 0;
		printf("\nDay so chan:");
		for (i = 0; i < N; i++) {
			if (A[i] % 2 == 0) {
				printf(" %i", A[i]);
				dem++;
			}	
		}
		printf("\nDay so co %i so chan", dem);
		
		int j;
		dem = 0;
		printf("\nDay so chinh phuong:");
		for (i = 0; i < N; i++) {
			for (j = 1; ; j++) {
					if (j*j == A[i]) {
						dem++;
						printf(" %i", A[i]);
					}
					if (j*j >= A[i]) {
						break;
					}
			}
		}
		printf("\nDay so co %i so chinh phuong", dem);
		
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
