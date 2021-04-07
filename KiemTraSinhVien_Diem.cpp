//nhap chuong trinh theo diem va kiem tra sinh vien theo diem
#include<stdio.h>
#include<stdlib.h>
struct Diem{
	float toan;
	float ly;
	float hoa;
	float DiemTRungBinh;
};
struct SinhVien{
	int MaSo;
	char Ten[30];
	char GioiTinh[5];
	Diem *diem;
};
void Nhap(Diem *diem);
void Xuat(Diem *diem);
void Nhap(SinhVien *sinhvien);
void Xuat(SinhVien *sinhvien);
void DiemTrungBinh(SinhVien *sinhvien);
void Nhap(Diem *diem){
	printf("Nhap diem toan = ");
	scanf("%f",&diem->toan);
	printf("Nhap diem ly = ");
	scanf("%f",&diem->ly);
	printf("Nhap diem hoa = ");
	scanf("%f",&diem->hoa);
}
void Xuat(Diem *diem){
	printf("diem toan = %.2f\n",diem->toan);
	printf("diem ly =  %.2f\n",diem->ly);
	printf("diem hoa = %.2f\n",diem->hoa);
}
float DiemTrungBinh(Diem *diem){
	return (float)(diem->toan+diem->ly+diem->hoa)/3.0;
}
void XepLoai(SinhVien *sinhvien){
	if(DiemTrungBinh(sinhvien->diem)>8){
		printf("loai GIOI");
	}
	else if(DiemTrungBinh(sinhvien->diem)>6.5){
		printf("Loai KHA");
	}
	else{
		printf("TRUNG BINH");
	}
}
void Nhap(SinhVien *sinhvien){
	printf("=============================================DANH SACH SINH VIEN=========================================\n");
	printf("nhap Ma so: ");
	scanf("%d",&sinhvien->MaSo);
	fflush(stdin);
	printf("nhap ten: ");
	gets(sinhvien->Ten);
	printf("nhap gioi tinh: ");
	gets(sinhvien->GioiTinh);
	sinhvien->diem = (Diem*)malloc(sizeof(Diem));
	Nhap(sinhvien->diem);
}
void Xuat(SinhVien *sinhvien){
	printf("==================================================================================================\n");
	printf("Ma So: %d\n",sinhvien->MaSo);
	printf("Ten : %s\n",sinhvien->Ten);
	printf("Gioi tinh : %s\n",sinhvien->GioiTinh);
	Xuat(sinhvien->diem);
}
int main(){
//	Diem *diem;
	SinhVien *sinhvien;
//	diem = (Diem*)(malloc(sizeof(Diem*)));
	sinhvien = (SinhVien*)malloc(sizeof(SinhVien));
//	Nhap(diem);
//	Xuat(diem);
	Nhap(sinhvien);
	Xuat(sinhvien);
	XepLoai(sinhvien);
	return 0;
}
