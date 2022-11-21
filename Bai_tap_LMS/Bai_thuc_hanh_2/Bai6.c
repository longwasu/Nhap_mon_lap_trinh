#include <stdio.h>
#include <math.h>

int main() {
 float a, b, c;
 	printf("Phuong trinh ax^2 + bx + c = 0\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);
    
    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh vo nghiem!");
        } else {
            printf("Phuong trinh co mot nghiem: x = %f", -c / b);
        }
        return;
    }
    
    float delta = b*b - 4*a*c;
    float x1;
    float x2;
    
    if (delta > 0) {
        x1 = (float) ((-b + sqrt(delta)) / (2*a));
        x2 = (float) ((-b - sqrt(delta)) / (2*a));
        printf("Phuong trinh co 2 nghiem la: x1 = %g va x2 = %g", x1, x2);
    } else if (delta == 0) {
        x1 = (-b / (2 * a));
        printf("Phong trinh co nghiem kep: x1 = x2 = %g", x1);
    } else {
        printf("Phuong trinh vo nghiem!");
    }
}    

