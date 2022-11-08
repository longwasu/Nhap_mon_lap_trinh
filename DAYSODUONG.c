#include <stdio.h>
int main() {
	int N=1, i;
	for (i=0; i>-1; i++)
	{
		printf("Hay nhap mot so duong: ");
		scanf("%i",&N);
		if (N <= 0) {
		break;
		}
	}
	
	printf("Ban da nhap %i so nguyen duong!",i);
	return 0;
}
