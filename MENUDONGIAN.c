#include <stdio.h>
int main() {
	int chon, i=1;
	while (i>0) {
		printf("[1] Buoi sang\n");
		printf("[2] Buoi trua\n");
		printf("[3] Buoi chieu\n");
		printf("[4] Buoi toi\n");
		printf("[5] Ket thuc\n");
		printf("Chon chuc nang: "); scanf("%i",&chon);
			
		switch (chon) {
			case 1:
			printf("Chao buoi sang\n");
			break;
			case 2:
			printf("Den gio nghi trua roi, di an thoi\n");
			break;
			case 3:
			printf("Het gio lam viec, ve nha nao\n");
			break;
			case 4:
			printf("Chuan bi ngu buoi toi\n");
			break;
			case 5:
			printf("Chuc ngu ngon\n");
			break;			
		}
		if (chon == 5) {
			break;}
	}
	return 0;
}
