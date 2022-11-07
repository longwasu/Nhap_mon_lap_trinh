#include <stdio.h>
#include <math.h>
int main() {
	int x;
	printf("Nhap x = ");	scanf("%i",&x);
	(x >= 0 && x != 3) ? printf("Ket qua: %g", (1 + sqrt(x)) / (x - 3)) : printf("Bieu thuc khong xac dinh");
	return 0;
}
