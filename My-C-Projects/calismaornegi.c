#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main(){
	setlocale(LC_ALL, "Turkish");
	
	int sayi;
	menu:printf("\n");
	printf("�i�ekler:\n");
	printf("1- G�l\n");
	printf("2- Papatya\n");
	printf("3- Lale\n");
	printf("4- Nergis\n");
	printf("Bir say� gir: ");
	scanf("%d",&sayi);
	switch(sayi){
		case 1:	
		 
		printf("G�l �i�e�i, yaz�n haftada en az iki kere sulamak yeterli.");
			printf("\n");
			goto menu;
			break;
		case 2:
		 
		printf("Haftada 1 kez sulamak yeterli.");
			printf("\n");
			goto menu;
			break;
		case 3:
	 
		printf("Haftada 2 kere sulanmal�d�r.");
			printf("\n");
			goto menu;
			break;
		case 4:
			
		printf("Topra�� kurumayacak �ekilde nemli tutulmal�d�r.");
			printf("\n");
			goto menu;
			break;
				
		default:
		printf("1 ile 4 aras� de�er girin\n");
		goto menu;
		
		}
}









