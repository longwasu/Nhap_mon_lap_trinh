#include <stdio.h>
#include <math.h>
int main() {
	int N;
	printf("N = "); scanf("%i",&N);
	if (N % 4 == 0 && N % 100 != 0) {
		printf("%i la nam nhuan", N);
	}
	else if (N % 4 != 0 && N % 400 != 0 || N % 100 == 0 && N % 400 != 0) {
		printf("%i khong phai nam nhuan", N);
	}
	else {
		printf("%i la nam nhuan", N);
	}
	return 0;
}
