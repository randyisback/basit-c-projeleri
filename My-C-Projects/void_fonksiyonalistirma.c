#include <stdio.h>
#include <locale.h>
void besebolunmekontrol(int a, int b){
	if(a%5==0){
		printf("%d sayisi 5'e bölünebiliyor.",a);
	}else{
		printf("%d sayisi 5'e bölünemez.",a);
	}
	if(b%5==0){
		printf("%d sayisi 5'e bölünebiliyor.",b);
	}else{
		printf("%d sayisi 5'e bölünemez.",b);
	}
}
int main(){
	setlocale(LC_ALL, 	"Turkish");
	/*Fonksiyon alıştırma
	Kullanıcıdan 2 sayı alıp 5'e bölündüklerini kontrol et
	*/
	int sayi1,sayi2;
	printf("iki tane sayi gir: ");
	scanf("%d %d",&sayi1,&sayi2);
	besebolunmekontrol(sayi1,sayi2);


}
