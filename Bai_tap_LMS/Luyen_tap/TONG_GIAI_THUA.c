#include <stdio.h>
int main() {
	int N, i, j, tong = 0;
	printf("Cho N = "); scanf("%i", &N);
	if (N <= 0 || N >= 10) printf("n khong hop le!");
	for (i = 1; i <= N; i++) {
		int tich = 1;
		for (j = 1; j <= i; j++) {
			tich = tich * j;
		}
		tong = tong + tich;
	}
	printf("S = %i", tong);
	return 0;
}
