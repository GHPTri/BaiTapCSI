#include <stdio.h>
#include <math.h>

int main(){
	double a, b, c, x1, x2, delta;
	printf("\n Nhap he so a:");
	scanf("%lf", &a);
	printf("\n Nhap he so b:");
	scanf("%lf", &b);
	printf("\n Nhap he so c:");
	scanf("%lf", &c);
	delta = (b * b) - (4 * a * c);
	if(a == 0){
		if((b == 0) && (c == 0)){
			printf("Phuong trinh co vo so nghiem");
		}
		if((b == 0) && (c != 0)){
			printf("Phuong trinh vo nghiem");
		}
		if((b != 0) && (c != 0)){
			x1 = - c / b;
			printf("Phuong trinh co nghiem la x = %.2lf", x1);	
		}
	}else{
		if(delta < 0){
			printf("Phuong trinh vo nghiem");
		}else if (delta == 0){
			x1 = - b / (2 * a);
			printf("Phuong trinh co nghiem kep x1 = x2 = %.2lf", x1);
		}else if(delta > 0){
			x1 = (-b + sqrt(delta)) / (2*a);
			x2 = (-b - sqrt(delta)) / (2*a);
			printf("Phuong trinh co hai nghiem phan biet x1 = %.2lf va x2 = %.2lf", x1, x2);
		}
	}
	
	
}

