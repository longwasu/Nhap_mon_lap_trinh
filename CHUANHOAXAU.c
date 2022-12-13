#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
	char W[50], S[50];	
	printf("Nhap W = "); gets(W);
	//Xoa space dau xau
	for ( ; ; ) {
		if (isspace(W[0])) {
			strcpy(&W[0], &W[1]);
		} else {
			break;
		}	
	}
	
	//Xoa space giua xau
	int i = 0;
	for (i = 0; i < strlen(W); i++) {
		if (isspace(W[i]) && isspace(W[i+1])) { 
			strcpy(&W[i], &W[i+1]);
			i--;
		}
	}
	
	//Xoa space cuoi xau
	if (isspace(W[strlen(W)-1])) {
		W[strlen(W)-1] = '\0';
	}
	printf("Chuan hoa = %s", W);
	return 0;
}
