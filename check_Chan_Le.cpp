//viet chuong trinh kirm tra chan le 
#include<stdio.h>
void nhap(int &n);
void xuat(int n);
void KiemTra(int n);
int main(){
	int n;
	nhap(n);
	xuat(n);
	KiemTra(n);
	return 0;
}
void nhap(int &n){
	printf("nhap n = ");
	scanf("%d",&n);
}
void xuat(int n){
	printf("n = %d",n);
}
void KiemTra(int n){
	if(n%2==0){
		printf("\n=>> %d la so chan",n);
	}
	else{
		printf("\n=>> %d la so le",n);
	}
}
