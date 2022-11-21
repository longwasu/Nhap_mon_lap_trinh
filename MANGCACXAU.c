#include <stdio.h>
#include <string.h>
int main() {
	int N, i = 0;
	printf("N = "); scanf("%i",&N);
	char A[N][20];
	while (i <= N) {
		if (i != 0) {
		printf("Ten ngon ngu lap trinh thu %i: ",i);}
		gets(A[i]);
		i++;
	}
	
	int min = strlen(A[1]), j = 1;
	for (i = 1; i <=N; i++) {
		if (strlen(A[i]) <= min){
			min = strlen(A[i]);
			j = i;}	
	}
	printf("Ngon ngu ngan nhat cuoi cung la: %s", A[j]);
	return 0;
}
