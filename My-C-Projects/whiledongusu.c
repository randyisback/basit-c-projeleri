#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main (){
	setlocale(LC_ALL, "Turkish");
	/*WHILE D�NG�S�
	0 ile 100 aras�nda birer birer artt�rmak
	*/
	int sayi = 0;
	while(sayi<=100){
		printf("%d\n", sayi);
		sayi++;
	}	
	return 0;
}

