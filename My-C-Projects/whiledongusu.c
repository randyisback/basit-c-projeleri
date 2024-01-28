#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main (){
	setlocale(LC_ALL, "Turkish");
	/*WHILE DÖNGÜSÜ
	0 ile 100 arasýnda birer birer arttýrmak
	*/
	int sayi = 0;
	while(sayi<=100){
		printf("%d\n", sayi);
		sayi++;
	}	
	return 0;
}

