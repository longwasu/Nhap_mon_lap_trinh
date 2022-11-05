#include <stdio.h>
int main(){
	int N, i = 0, A = 0;
	printf("N = "); scanf("%i",&N);
	printf("Cac so chia het cho 3 trong khoang N den 2N:");
	int M = 2*N - N;
	for (i=0; i <= M; i++) {
		A = N + i;
		while (A % 3 == 0) {
			printf(" %i",A);
			break;
		}		
	}
	return 0;
}
