#include <stdio.h>
#include <math.h>
int main() {
	int n;
	float x1,x2,x3,y1,y2,y3;
	printf("Nhap toa do diem A\n");
	printf("x1 = "); scanf("%f",&x1);
	printf("y1 = "); scanf("%f",&y1);
	printf("Nhap toa do diem B\n");
	printf("x2 = "); scanf("%f",&x2);
	printf("y2 = "); scanf("%f",&y2);
	printf("Nhap toa do diem A\n");
	printf("x3 = "); scanf("%f",&x3);
	printf("y3 = "); scanf("%f",&y3);
	float AB = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	float AC = sqrt(pow(x3-x1,2) + pow(y3-y1,2));
	float BC = sqrt(pow(x3-x2,2) + pow(y3-y2,2));
	float p = (AB + BC + AC) / 2;
	if (AB + AC == BC || AB + BC == AC || AC + BC == AB) {
		printf("A,B,C la 3 diem thang hang");
	} else {
		printf("Dien tich tam giac ABC la: %f",sqrt(p*(p-AB)*(p-AC)*(p-BC)));		
	}	
	return 0;
}
