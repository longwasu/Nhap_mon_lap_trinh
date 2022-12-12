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
		
		int min = A[0];
		for (i = 1; i < N; i++) {
			if (A[i] < min) {
				min = A[i];
			}
		}
		printf("\nSo nho nhat cua day so la %i", min);
		
		int dem =0, j;
		for (i = 0; i < N; i++) {
			for (j = 2; j < A[i]; j++) {
				if (A[i] % j == 0) {
				break;	
				}
			}
			if (j == A[i]) {
				dem++;
			}		
		}
		printf("\nDay so co %i so nguyen to", dem);
		
		int tong = 0;
		for (i = 0; i < N; i++) {
			tong = tong + A[i];
		}
		printf("\nTrung binh cong cac so trong day la: %g",(float) tong / N);
	}
	return 0;
}
