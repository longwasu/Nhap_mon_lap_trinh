#include <stdio.h>
int main() {
	char W[50];
	int i, dem = 0;
	printf("Nhap xau ky tu: "); gets(W);
	
	for (i = 0; i < 50; i++) {
		if (W[i] == 'A' || W[i] == 'a') dem++;		
	}
	printf("Ket qua: %i", dem);
	return 0;
}
