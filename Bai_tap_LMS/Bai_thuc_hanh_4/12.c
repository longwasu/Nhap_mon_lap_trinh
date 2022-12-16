#include <stdio.h>
#include <string.h>
#include <ctype.h>

void dem(char S[50], char c) {
	int dem = 0, i =0;
	for (i = 0; i < strlen(S); i++) {
		if (S[i] == c) dem++;
	}
	printf("C xuat hien trong S %i lan\n", dem);
}

int main() {
	char S[50], c;
	printf("Nhap S = "); gets(S);
	printf("Nhap 1 ki tu C = "); c = getchar();
	
	dem(S, c);
	
	int i = 0;
	for (i = 0; i < strlen(S); i++) {
		printf("%c", tolower(S[i]));		
	}
	return 0;
}
