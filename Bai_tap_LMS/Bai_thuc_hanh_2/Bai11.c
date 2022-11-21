#include <stdio.h>

int main() {
	float diemtb;
	char masv[10], tensv[30];
	printf("Nhap ma sinh vien: "); gets(masv);
	printf("Nhap ten sinh vien: "); gets(tensv);
	printf("Nhap diem trung binh: "); scanf("%f",&diemtb);
	
	printf("Ten sinh vien: %s.\t",tensv); printf("Ma sinh vien: %s\t",masv); printf("Diem trung binh: %g\n",diemtb);
	if (diemtb <= 4)
		printf("Hoc luc yeu");
	else if (diemtb < 6)
		printf("Hoc luc trung binh");
	else if (diemtb < 8)
		printf("Hoc luc kha");
	else if (diemtb < 9.5)
		printf("Hoc luc gioi");
	else
		printf("Hoc luc xuat xac");
	return 0;
}
