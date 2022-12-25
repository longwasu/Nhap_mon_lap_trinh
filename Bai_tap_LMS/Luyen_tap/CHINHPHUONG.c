#include <stdio.h>
#include <math.h>
int main() {
	int n;
	while (1) {
		printf("Cho so nguyen n = "); scanf("%i", &n);
		if (n > 0 && n < 1000) break;
	}
	int can = sqrt(n);
	if (can * can == n && n % 2 == 0) {
		printf("So n la so chinh phuong chan.");
	} else if (can * can == n) {
		printf("So n la so chinh phuong le.");
	} else {
		printf("So n khong la so chinh phuong!");
	}
	return 0;
}
