#include <stdio.h>
#include <math.h>
int main() {
	int N, i = 0, tong = 0;
	printf("N = "); scanf("%i",&N);
	while (tong < N) {
		i++;
		tong = tong + i;
			}
	while (N == 0) {
		i++;
		break;
	}
	printf("m lon nhat = %i",i - 1);
		
	return 0;
}
