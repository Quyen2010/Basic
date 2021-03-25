// nhap 3 so
// xuat diem TB 3 so
#include <stdio.h>
#include <stdlib.h>
struct Diem {
	int toan;
	int ly;
	int hoa;
	float DiemTB;
}
void nhap (Diem * diem);
void xuat (Diem * diem);
int main () {
	Diem * diem;
	diem = (Diem *) malloc (sizeof (Diem));
	nhap (diem);
	xuat (diem);
}
void nhap (Diem * diem) {
	printf ("nhap diem toan:");
	scanf ("% d", & diem-> toan);
	printf ("nhap diem ly:");
	scanf ("% d", & diem-> ly);
	printf ("nhap diem hoa:");
	scanf ("% d", & diem-> hoa);
}
void xuat (Diem * diem) {
	printf ("\ nDiem Toan:% d", diem-> toan);
	printf ("\ nDiem Ly:% d", diem-> ly);
	printf ("\ nDiem Hoa:% d", diem-> hoa);
	printf ("\ nDiem Trung Binh:% .f", (float) (diem-> toan + diem-> ly + diem-> hoa) /3.0);
}
