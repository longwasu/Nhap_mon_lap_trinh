#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
	char W[50];
	printf("Nhap W = "); gets(W);
	printf("W sau khi xoa cac chu so = ");
	int i = 0;
	for (i = 0; i < strlen(W); i++) {
		if (isdigit(W[i]) == 1) {
			continue;
		}
		printf("%c", W[i]);
	}
	return 0;
}
