#include <stdio.h>
#include <math.h>
int main() {
	int n, i, j;
	while (1) {
		printf("Nhap so nguyen duong n = "); scanf("%i", &n);
		if (n > 0 && n < 10000) break;
	}
	printf("Cac so hoan hao trong [1..%i]:", n);
	for (i = 1; i <= n; i++) {
		int tong = 0;
		for (j = 1; j <= i; j++){
			if (i % j == 0) {
				tong = tong + j;
			}
		}
		if (tong == 2*i) printf(" %i", i);
	}
	return 0;
}
