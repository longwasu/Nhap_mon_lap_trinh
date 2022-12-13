#include <stdio.h>
#include <string.h>
int main() {
	char S[50], c;
	printf("Nhap S = "); gets(S);
	printf("Nhap 1 ki tu: "); c = getchar();
	int dem = 0, i =0;
	for (i = 0; i < strlen(S); i++) {
		if (S[i] == c) dem++;
	}
	printf("c xuat hien trong S %i lan\n", dem);
	
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
	if (S[0] != '\0') {
		dem = 1;
		for (i = 0; i < strlen(S); i++) {
			if (isspace(S[i]))
				dem++;
		}
	}
	printf("Xau S co %i tu", dem);
	return 0;
}
