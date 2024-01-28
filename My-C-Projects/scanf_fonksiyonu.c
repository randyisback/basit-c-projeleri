#include <stdio.h>
int main(){
	//Scanf fonksiyonu
	
	/*
	int sayi;
	scanf("%d",&sayi);
	printf("Scanf ile aldigin sayi = %d", sayi);
	*/
	
	
	
	// 20(10x +5y)+3(2x+8y)
/*	int x,y,cevap;
	printf("x sayisini giriniz: ");
	scanf("%d",&x);
	printf("y sayisini giriniz: ");
	scanf("%d",&y);
	cevap = 3*(x+y);
	printf("Cevap = %d",cevap);
	*/
	
	
	//Scanf ile yaþ hesaplama örneðimm 
	
	
	int dogumtarih;
	int yas;
	printf("Dogum tarihini gir: ");
	scanf("%d",&dogumtarih);
	yas = 2022 - dogumtarih;
	printf("%d", yas);

	//
	return 0;
}
