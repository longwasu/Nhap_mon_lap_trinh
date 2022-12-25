#include <stdio.h>
#include <math.h>
int main() {
	int n, i, j;
	while (1) {
		printf("Nhap so nguyen duong n = "); scanf("%i", &n);
		if (n < 0 || n > 10000) {
			printf("Nhap sai! Phai nhap lai!\n");
		} else break;
		
	}
	for (i = 2; i < n; i++) {
		if (n % i == 0 && n != 2) {
			printf("So %i khong la nguyen to.", n);
			break;		
		}
	}
	if (n == i ) printf("So %i la so nguyen to.", n);
	return 0;
}
