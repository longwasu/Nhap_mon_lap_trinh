#include <stdio.h>
int main() {
	int M, N, i=0, j=0;
	printf("M = "); scanf("%i", &M);
	printf("N = "); scanf("%i", &N);
	if (M > 0 && N > 0) {
		while (i < M ) {
			i++;
			while (j < N ) {
			printf("0");
			j++;
			if (j < N) {
				printf(" ");
			} else {
				j = 0;
				break;
			}
			}
			printf("\n");
		}
	}
	return 0;
}
