#include <stdio.h>
int main() {
	int N, i=0, j=0;
	printf("N = "); scanf("%i",&N);
	while (i <= N) {
		i++;
		if (N % i == 0) {
			j++;}	
	}
		printf("So %i co %i uoc so.", N, j);
	return 0;
}
