#include <stdio.h>
#include <string.h>
int main() {
	char S[50],W[50];
	printf("Nhap xau S: "); gets(S);
	printf("Nhap xau W: "); gets(W);
	if (strstr(S,W) == 0) {
		printf("W khong xuat hien trong S\n");
	} else {
		printf("W xuat hien trong S o vi tri %i\n", strstr(S,W) - &S[0]);
	}
	
	return 0;
}
