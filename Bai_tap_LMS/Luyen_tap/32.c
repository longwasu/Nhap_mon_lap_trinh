#include <stdio.h>
#include <math.h>
int main() {
	int n, i;
	while (1) {
		printf("Nhap n = "); scanf("%i", &n);
		if (n > 0 && n <= 1000) break;
	}
	int A[n], tong = 0, dem = 0;
	for (i = 1; i <= n; i++) {
		printf("So thu %i: ", i); scanf("%i", &A[i]);
		if (A[i] > 0) tong = tong + A[i];
		int can = sqrt(A[i]);
		if (can * can == A[i]) dem++;
	}
	printf("Tong cac so duong: %i.\n", tong);
	printf("Day co %i so chinh phuong.", dem);
	
	return 0;
}
