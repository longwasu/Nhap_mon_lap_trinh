#include <stdio.h>
#include <string.h>
int main() {
	char S[50], W[50];
	printf("Nhap xau S = "); gets(S);
	printf("Nhap 1 tu W = "); gets(W);
	
	//dem so
	int dem = 0, i =0;
	for (i = 0; i < strlen(S); i++) {
		if (isdigit(S[i])) dem++;
	}
	printf("Xau S co %i chu so\n", dem);
	
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
	printf("Xau S co %i tu\n", dem);
	
	//Tim xau con
	if (strstr(S, W) == 0) {
		printf("W khong xuat hien trong S");
	} else {
		printf("W co xuat hien trong S");
	}
	return 0;
}
