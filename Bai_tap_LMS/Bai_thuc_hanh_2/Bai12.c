#include <stdio.h>
#include <math.h>

int main() {	
	int soluong, tong, dongia;
	printf("Nhap don gia: "); scanf("%i",&dongia);
	printf("Nhap so luong mua: "); scanf("%i",&soluong);
	tong = dongia * soluong;
	if (soluong > 10) {
		tong = tong * 0.8;
	} else if (soluong >= 5 && soluong <= 10) {
		tong = tong * 0.85;
	}
	printf("Thanh tien: %i",tong);
	return 0;
}
