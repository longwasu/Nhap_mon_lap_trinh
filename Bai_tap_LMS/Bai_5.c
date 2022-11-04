#include <stdio.h>
int main() {
	int to_500k=500000, to_200k=200000, to_100k=100000, to_50k=50000, soto_500k, soto_200k, soto_100k, soto_50k, tong_so_tien_rut, tien_con_lai;
	printf("Nhap so tien muon rut:"); scanf("%i",&tong_so_tien_rut);
	soto_500k = tong_so_tien_rut / to_500k;
	tien_con_lai = tong_so_tien_rut - soto_500k * to_500k;
	soto_200k = tien_con_lai / to_200k;
	tien_con_lai -= soto_200k * to_200k;
	soto_100k = tien_con_lai / to_100k;
	tien_con_lai -= soto_100k * to_100k;
	soto_50k = tien_con_lai / to_50k;
	int tong_so_to_tien = soto_500k + soto_200k + soto_100k + soto_50k;
	printf("So to tien 500k: %i\n",soto_500k);
	printf("So to tien 200k: %i\n",soto_200k);
	printf("So to tien 100k: %i\n",soto_100k);
	printf("So to tien 50k: %i\n",soto_50k);
	printf("Tong so to tien: %i",tong_so_to_tien);
	return 0;
}
