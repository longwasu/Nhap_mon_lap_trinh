#include <stdio.h>
int main() {
	char S[50], W[50];
	int i;
	printf("Nhap xau S: "); gets(S);
	printf("Nhap xau W: "); gets(W);
	for (i = 0; i < 50; i++) {
		if (W[0] == S[i]) {
		printf("W xuat hien trong S o vi tri %i\n", i);
		break;	
		}
	}		
	if (i == 50) {
		printf("W khong xuat hien trong S\n");
	}		
		
	return 0;
}
