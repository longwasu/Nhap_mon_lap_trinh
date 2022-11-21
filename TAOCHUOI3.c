#include <stdio.h>
#include <string.h>

int main() {
	char W[50], S[60];
	int i, j, k = 0;
	printf("Nhap W = "); gets(W);
	printf("Cac xau con la:");
	if (W[0] != '\0') {	
		for (i = 0; i < 3; i++) {
			j = 0;
			for (j = 0; j < strlen(W); j++) {
				S[k] = W[j];
				k++;
			}	
		}
		int n = strlen(S) / 3;
		k = 0;
		for (i = 0; i < n; i++) {
			printf("\n");
			for (j = 0; j < 3; j++) {
				printf("%c",S[k]);
				k++;			
			}		
		}
	}
	printf("\n");	
	return 0;
}
