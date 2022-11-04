#include<stdio.h>
int main(){
	int N,i=0;
	printf("N = "); scanf("%i",&N);
	printf("Day so:");
	int M = 3*N - 2*N;
	while (i<=M) {
		printf(" %i",2*N+i);
		i++;
	}
		return 0;
}
