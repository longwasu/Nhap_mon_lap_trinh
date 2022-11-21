#include <stdio.h>
int main() {
	char W[50], M[50];
	int i, j = 0;
	printf("Nhap W = "); gets(W);
		for (i = 0; i<50; i++) {		
			if (W[i] != '0' && W[i] != '1' && W[i] != '2' && W[i] != '3' && W[i] != '4' && W[i] != '5' && W[i] != '6' && W[i] != '7' 
			&& W[i] != '8' && W[i] != '9') {
			M[j] = W[i];
			j++;
			}
		}
	printf("W sau khi xoa cac chu so = %s",M);
	return 0;
}
