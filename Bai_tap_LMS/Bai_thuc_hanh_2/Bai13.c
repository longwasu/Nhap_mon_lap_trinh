#include <stdio.h>
#include <math.h>

int main() {
	int namhoc;
	char tensv[30];
	printf("Nhap ten sinh vien: "); gets(tensv);
	printf("Nam hoc: "); scanf("%i",&namhoc);
	switch(namhoc) {
		case 1:
			printf("Hoc phi sinh vien trong nam hoc 1 la: %i",30*400000);
			break;
		case 2:
			printf("Hoc phi sinh vien trong nam hoc 2 la: %i",40*400000);
			break;
		case 3:
			printf("Hoc phi sinh vien trong nam hoc 3 la: %i",35*400000);
			break;
		case 4:
			printf("Hoc phi sinh vien trong nam hoc 4 la: %i",20*400000);
			break;	
	}
	return 0;
}
