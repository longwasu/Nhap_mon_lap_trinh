#include <stdio.h>
int main() {
	int N, i;
	printf("Nhap N (0<N<=100): "); scanf("%i",&N);
	if (N > 0 && N < 100) {
		int A[N];
		for(i = 0; i < N; i++) {
			printf("A[%i] = ", i); scanf("%i", &A[i]);
			
		}
		printf("Day so:");
		for(i = 0; i < N; i++) {
			printf(" %i", A[i]);
		}
		
		printf("\nDay nguoc:");
		for(i = N - 1; i >= 0; i--) {
			printf(" %i", A[i]);
		}
		
		int max = 0, j =0, dem = 0;
		for (i = 0; i < N; i++) {
			for (j = 1; ; j++) {
					if (j*j == A[i]) {
						dem++;
						if (A[i] > max) {
							max = A[i];
						}
					}
					if (j*j >= A[i]) {
						break;
					}
			}
		}
		if (dem != 0) {
			printf("\nSo chinh phuong lon nhat trong day la %i", max);
		} else {
			printf("\nDay khong co so chinh phuong!");
		}
		
	}
	return 0;
}
