#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Turkish");
	/*do while
	Kullan�c� 0 yazana kadar say�lar� topla
	*/
	printf("Merhaba. istedi�in say�lar� gir. 0 yazana kadar girdi�in b�t�n say�lar toplanacak.\n\n");
	int sayi,topla=0;
	do{
		scanf("%d",&sayi);
		topla+=sayi;
	}while(sayi !=0);
	printf("Toplama i�lemi sonucu: %d", topla);
	
	return 0;
}
