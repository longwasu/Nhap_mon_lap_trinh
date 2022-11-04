#include <stdio.h>
#include <math.h>
int main() {
	float M,T,HK;
	printf("Diem Mieng = "); scanf("%f",&M);
	printf("Diem Mot Tiet = "); scanf("%f",&T);
	printf("Diem Hoc Ky = "); scanf("%f",&HK);
	printf("Diem TB = %g",(M+T*2+HK*3)/6);
	return 0;
}
