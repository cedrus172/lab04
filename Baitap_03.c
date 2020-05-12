#include <stdio.h>
#include <conio.h>
main() {
	float num1, num2, Tong, Hieu, Tich, Thuong;

	printf("Nhap so num1 = ");
	scanf("%f", &num1);

	printf("Nhap so num2 = ");
	scanf("%f", &num2);

	Tong = num1 + num2;
	Hieu = num1 - num2;
	Tich = num1 * num2;
	Thuong = num1 / num2;

	printf("Tong = %.f", Tong);
	printf("\nHieu = %.f", Hieu);
	printf("\nTich = %.f", Tich);
	printf("\nThuong = %f", Thuong);

	getch();
}
