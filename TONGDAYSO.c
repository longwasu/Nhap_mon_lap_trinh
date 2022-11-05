#include <stdio.h>
int main() {
	int N, i=2, tong = 0;
		printf("N = "); scanf("%i",&N);
	while (i<=N) {
		tong = tong + (i-1)*i*(i+1);
		i++;
	}
	printf("A = %i\n",tong);
	return 0;
}
