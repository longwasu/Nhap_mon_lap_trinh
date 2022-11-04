#include <stdio.h>
int main() {
	char ho[10], ten_dem[10], ten[10], lop[10];
	printf("Nhap ten sinh vien: "); scanf("%s%s%s", ho, ten_dem, ten);
	printf("Nhap ten lop: "); scanf("%s",lop);
	printf("xin chao %s %s %s, lop: %s!",ho, ten_dem, ten,lop);
	printf("\nHello %s %s %s, class: %s!",ho, ten_dem, ten,lop);
	return 0;
}
