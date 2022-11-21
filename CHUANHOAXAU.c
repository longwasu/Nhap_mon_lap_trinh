#include <stdio.h>
#include <string.h>
int main() {
	char W[50];
	int i = 0, j;
	printf("Nhap W = "); gets(W);
	printf("Chuan hoa = ");
	for ( i = 0; i < strlen(W); i++) {
		for (; ; ){ break;
		}
		if (W[i] != W[i+1]) {
		printf("%c",W[i]);}		
	}
	
	
	return 0;
} 
