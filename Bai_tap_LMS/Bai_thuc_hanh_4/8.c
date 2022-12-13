#include <stdio.h>
#include <string.h>
int main() {
	char S[50];
	printf("Nhap S = "); gets(S);
	int dem = 0, i = 0;
	for (i = 0; i < strlen(S); i++) {
		if (isupper(S[i])) dem++;
	}
	printf("Xau S co %i ki tu in hoa\n", dem);
	
	printf("Xau S nguoc la: ");
	for (i = strlen(S) - 1; i >= 0; i--) {
		printf("%c", S[i]);
	}
	
	//chuan hoa xau
	for (i = 0; i < strlen(S); i++) {
		if (isspace(S[0])) {
			strcpy(&S[0], &S[1]);
		}
		if (isspace(S[i]) && isspace(S[i+1])) {
			strcpy(&S[i], &S[i+1]);
			i--;
		}
		if (isspace(S[strlen(S)-1])) {
			S[strlen(S)-1] = '\0';
		}
	}
	
	//dem tu
	if (S[0] != '\0') {
		dem = 1;
		for (i = 0; i < strlen(S); i++) {
			if (isspace(S[i]))
				dem++;
		}
	}
	printf("\nXau S co %i tu", dem);
	return 0;
}
