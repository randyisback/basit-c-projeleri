#include <stdio.h>
int main(){
	/*
	Diziler
	
	*/
	
	/*
	***************************************************************
	int sayilar[]={1,2,3,4};
	printf("%d",sayilar[2]); //0'dan ba�lad��� i�in [2] yazd���m�z zaman "3" yazd�r�l�r. 0 yazarsak 1 yaz�l�r.
	***************************************************************
	char kelime[]={"Azad"};
	printf("%s",kelime);
	***************************************************************
	char isim[20];
	scanf("%s",&isim);
	printf("%s",isim);
	*/
	
	
	/*
	5 tane say� i�erisinde en k���k olan� konsola yazd�racak program*/
	int i,min;
	int dizi[]={5,4,6,20,2};
	min=dizi[0];
	for(i=0;i<5;i++){
		if(min > dizi[i]){
			min = dizi[i];
			
		}
	
	}
	printf("En kucuk sayi %d\n",min);	






return 0;
}
