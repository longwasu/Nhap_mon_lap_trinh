#include <stdio.h>
#include<string.h>

int main() {
	int P, Q, i = 0;
	char W[50], S[50];
	printf("Nhap W = "); gets(W);
	printf("Nhap S = "); gets(S);
	printf("P = "); scanf("%i", &P);
	printf("Q = "); scanf("%i", &Q);
	int d = strlen(W);
	if (P <= strlen(W) && Q <= strlen(W)) {
	printf("Ket qua: ");
		for (i = 0; i < d; i++) {
			if (i == P || i == Q) {
				if (P == Q) 
				printf("%s",S);
				printf("%s",S);}
			printf("%c",W[i]);		
		}	
	}
	return 0;
}
