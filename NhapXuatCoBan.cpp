// nhap xuat 2 so , tong hieu tich thuong ,luy thua , can bac 2 cua 2 so do
#include<stdio.h>
#include<math.h>
void nhap(int &a, int &b);
void xuat(int a,int b);
int Tong(int a, int b);
int Hieu(int a, int b);
int Tich(int a, int b);
float Thuong(int a, int b);
int LuyThua(int a, int b);
void CanBacHai(int &n);
int main(){
	int a,b;
	int n;
	nhap(a,b);
	xuat(a,b);
	Tong(a,b);
	Hieu(a,b);
	Tich(a,b);
	Thuong(a,b);
	LuyThua(a,b);
	CanBacHai(n);
	return 0;
}
void nhap(int &a, int &b){
	printf("nhap a= ");
	scanf("%d",&a);
	printf("nhap b = ");
	scanf("%d",&b);
}
void xuat(int a,int b){
	printf("a = %d",a);
	printf("\nb = %d",b);
}
int Tong(int a, int b){
	printf("\nTong = %d",a+b);
	return a+b;
}
int Hieu(int a, int b){
	printf("\nHieu = %d",a-b);
	return a-b;
}
int Tich(int a, int b){
	printf("\nTich = %d",a*b);
	return a*b;
}
float Thuong(int a, int b){
	if(b>0||b<0){
	printf("\nThuong = %.2f",(float)a/b);
	}
	else{
		printf("\nkhong thoa man dieu kien!!!");
	}
	return (float)a/b;
}
int LuyThua(int a, int b){
	int luythua;
	printf("\nluy thua %d ^%d = %d",a,b,luythua);
	luythua = pow(a,b);
	return luythua;
}
void CanBacHai(int &n){
	printf("\nnhap n = ");
	scanf("%d",&n);
	printf("sqrt cua %d = %.2f",n,sqrt(n));
}
