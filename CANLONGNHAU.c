#include <stdio.h>
#include <math.h>
int main() {
	float N;
	printf("N = "); scanf("%f",&N);
	int i = N - 1;
	N = sqrt(N);
	while ( i > 0) {
		N = sqrt(i + N);
		i--;
	}
	printf("F(n) = %g",N);
	return 0;
}
