#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Turkish");
	/*do while
	Kullanýcý 0 yazana kadar sayýlarý topla
	*/
	printf("Merhaba. istediðin sayýlarý gir. 0 yazana kadar girdiðin bütün sayýlar toplanacak.\n\n");
	int sayi,topla=0;
	do{
		scanf("%d",&sayi);
		topla+=sayi;
	}while(sayi !=0);
	printf("Toplama iþlemi sonucu: %d", topla);
	
	return 0;
}
