#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
	int n;
	while (1) {
		printf("Nhap so nguyen duong n = "); scanf("%i", &n);
		if (n <= 0 || n >= 10000) {
			printf("Nhap sai! Phai nhap lai!\n");
		} else break;
	}
	int x = log10(n), i, tam;
	int A[x+1];
	for (i = 0; x != -1; i++) {
		tam = n / (int)pow(10, x);
		A[i] = tam;
		n = n - tam * (int)pow(10, x);
		x--;
	}

	int min = A[0], j;
	for (j = 1; j < i; j++) {
		if (A[j] < min) min = A[j];
	}
	printf("Chu so min cua n: %i\n", min);
	
	int max = A[0];
	for (j = 1; j < i; j++) {
		if (A[j] > max) max = A[j];
	}
	printf("Chu so max cua n: %i", max);
	return 0;
}
