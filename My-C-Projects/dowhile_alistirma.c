#include <stdio.h>
#include <locale.h>
int main(){
	
	setlocale(LC_ALL, "Turkish");
	/*do while
	seçim sistemi, sisteme 3 aday arasýnda yapýlacak ve kazananý görmek
	için 0 sayýsýna basýcaktýr.
	*/
	int secim,a=0,b=0,c=0;
	int sayac=1;
	menu: printf("\n1)Ahmet\n2)Salih\n3)Ali\n");
	printf("Lütfen seçim yapýnýz [1-3]:");
do{
	scanf("%d",&secim);
	if(secim==1){
		system("cls");
		printf("Oylama Basarili. Yapýlan oy sayýsý: %d\n",sayac);
		a++;
		sayac++;
	}else if(secim==2){
		system("cls");
		printf("Oylama Basarili. Yapýlan oy sayýsý: %d\n",sayac);
		b++;
		sayac++;
	}else if(secim==3){
		system("cls");
		printf("Oylama Basarili. Yapýlan oy sayýsý: %d\n",sayac);
		c++;
		sayac++;
	}else if(secim!=5){
		printf("Lütfen seçiminizi 1-3 arasý girin.\n");
		goto menu;
	}
	
}while(secim!=5);
printf("1)Ahmet=%d\n2)Salih=%d\n3)Ali=%d\n",a,b,c);
	if(a>b && a>c){
		printf("Ahmet %d oy ile Kazandý!",a);
	}else if(b>a && b>c){
		printf("Salih %d oy ile Kazandý!",b);
	}else if(c>a && c>b){
		printf("Ali %d oy ile Kazandý!",c);
	}else{
		printf("seçimden bir sonuç alýnamadý.");
	}
}
