#include<stdio.h>
int main(){
	int chon = 0;
	int n;
	do{
		printf("========================================MENU===========================================\n");
		printf("1. ga ran\n");
		printf("2. mi quang\n");
		printf("3. com chien\n");
		printf("4. vit quay\n");
		printf("ban chon: ");
		scanf("%d",&chon);
		switch(chon){
			case 1:
				printf("ban da chon ga ran.\n");
				break;
			case 2:
				printf("ban da chon mi quang.\n");
				break;
			case 3:
				printf("ban da chon com chien.\n");
				break;
			case 4:
				printf("ban da chon vit quay.\n");
				break;
			default:
				printf("ban chon sai. moi ban chon lai menu.");
				break;
		}
	}while(chon =! 4);
	return 0;
}
