#include <stdio.h>
#include <math.h>
int main() {
	int N;
	printf("N = "); scanf("%i",&N);
	printf("So tien phai nop: ");
	if (N <= 50) {
		printf("%i", N * 1484);
	}
	else if (N <= 100) {
		printf("%i", 50 * 1484 + (N - 50) * 1533);
	}
	else if (N <= 200) {
		printf("%i", 50 * 1484 + 50 * 1533 + (N - 100) * 1786);
	}
	else if (N <= 300) {
		printf("%i", 50 * 1484 + 50 * 1533 + 100 * 1786 + (N - 200) * 2242);
	}
	else if (N <= 400) {
		printf("%i", 50 * 1484 + 50 * 1533 + 100 * 1786 + 100 * 2242 + (N - 300) * 2503);
	}
	else {
		printf("%i", 50 * 1484 + 50 * 1533 + 100 * 1786 + 100 * 2242 + 100 * 2503 + (N - 400) * 2587);
	}
	return 0;
}
