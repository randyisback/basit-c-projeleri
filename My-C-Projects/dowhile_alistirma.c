#include <stdio.h>
#include <locale.h>
int main(){
	
	setlocale(LC_ALL, "Turkish");
	/*do while
	se�im sistemi, sisteme 3 aday aras�nda yap�lacak ve kazanan� g�rmek
	i�in 0 say�s�na bas�cakt�r.
	*/
	int secim,a=0,b=0,c=0;
	int sayac=1;
	menu: printf("\n1)Ahmet\n2)Salih\n3)Ali\n");
	printf("L�tfen se�im yap�n�z [1-3]:");
do{
	scanf("%d",&secim);
	if(secim==1){
		system("cls");
		printf("Oylama Basarili. Yap�lan oy say�s�: %d\n",sayac);
		a++;
		sayac++;
	}else if(secim==2){
		system("cls");
		printf("Oylama Basarili. Yap�lan oy say�s�: %d\n",sayac);
		b++;
		sayac++;
	}else if(secim==3){
		system("cls");
		printf("Oylama Basarili. Yap�lan oy say�s�: %d\n",sayac);
		c++;
		sayac++;
	}else if(secim!=5){
		printf("L�tfen se�iminizi 1-3 aras� girin.\n");
		goto menu;
	}
	
}while(secim!=5);
printf("1)Ahmet=%d\n2)Salih=%d\n3)Ali=%d\n",a,b,c);
	if(a>b && a>c){
		printf("Ahmet %d oy ile Kazand�!",a);
	}else if(b>a && b>c){
		printf("Salih %d oy ile Kazand�!",b);
	}else if(c>a && c>b){
		printf("Ali %d oy ile Kazand�!",c);
	}else{
		printf("se�imden bir sonu� al�namad�.");
	}
}
