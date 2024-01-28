#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main(){
	setlocale(LC_ALL, "Turkish");
	
	int sayi;
	menu:printf("\n");
	printf("Çiçekler:\n");
	printf("1- Gül\n");
	printf("2- Papatya\n");
	printf("3- Lale\n");
	printf("4- Nergis\n");
	printf("Bir sayý gir: ");
	scanf("%d",&sayi);
	switch(sayi){
		case 1:	
		 
		printf("Gül çiçeði, yazýn haftada en az iki kere sulamak yeterli.");
			printf("\n");
			goto menu;
			break;
		case 2:
		 
		printf("Haftada 1 kez sulamak yeterli.");
			printf("\n");
			goto menu;
			break;
		case 3:
	 
		printf("Haftada 2 kere sulanmalýdýr.");
			printf("\n");
			goto menu;
			break;
		case 4:
			
		printf("Topraðý kurumayacak þekilde nemli tutulmalýdýr.");
			printf("\n");
			goto menu;
			break;
				
		default:
		printf("1 ile 4 arasý deðer girin\n");
		goto menu;
		
		}
}









