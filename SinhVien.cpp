#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#define MAX 50
void nhap(int *p,int &n);
void xuat(int *p,int n);
void tong(int *p,int n);
void SapXepTang(int *p,int n);
void AmMax2(int *p, int n);
void DaoNguoc(int *p,int n);
int main(){
	int n,*p;
	p = (int *)malloc (sizeof(int)*n);
	do{
		printf("nhap n= ");
		scanf("%d",&n);
		if(n<=0||n>MAX){
			printf("nhap n=");
			scanf("%d",&n);
		}
	}
	while(n<=0||n>MAX);
	nhap(p,n);
	xuat(p,n);
	tong(p,n);
	SapXepTang(p,n);
	AmMax2(p,n);
	DaoNguoc(p,n);
	return 0;
}
void nhap(int *p,int &n){
	printf("nhap day so:\n");
	for(int i = 0 ; i < n ; i++){
	printf("p[%d] =  ",i);
	scanf("%d",(p+i));
	}
}
void xuat(int *p,int n){
	printf("day vua nhap la:\n ");
	for(int i = 0 ; i < n; i ++){
	printf("%d\t",*(p+i));
	}
}	
void tong(int *p , int n){
	int s = 0;
	for(int i = 0 ; i < n ; i++){
		s+= *(p+i);
	}
	printf("\ntong mang so nguyen :%d\n",s);
}
void SapXepTang(int *p,int n){
	int temp;
	for(int i= 0 ; i < n ; i++){
		for(int j = i+1 ; j < n ; j ++){
			if(*(p+i)>*(p+j)){
				temp = *(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
}
void AmMax2(int *p,int n){
    SapXepTang(p,n);
    for(int i=n-1;i>=0;i--){
        if(*(p+i)<0 && *(p+i)>*(p+i-1)){
            printf("So am lon thu 2 la: %d",*(p+i-1));
            break;
        }
        else {
            printf ("Khong co so am lon thu 2\n");
            break;
        }
    }
}
void DaoNguoc(int *p,int n){
	printf("day sau khi dao nguoc la:\n");
	for(int i = n -1;i>=0;i--){
		printf("%d\t",*(p+i));
	}
}
