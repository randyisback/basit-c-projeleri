#include <stdio.h>
#include <locale.h>
void besebolunmekontrol(int a, int b){
	if(a%5==0){
		printf("%d sayisi 5'e b�l�nebiliyor.",a);
	}else{
		printf("%d sayisi 5'e b�l�nemez.",a);
	}
	if(b%5==0){
		printf("%d sayisi 5'e b�l�nebiliyor.",b);
	}else{
		printf("%d sayisi 5'e b�l�nemez.",b);
	}
}
int main(){
	setlocale(LC_ALL, 	"Turkish");
	/*Fonksiyon al��t�rma
	Kullan�c�dan 2 say� al�p 5'e b�l�nd�klerini kontrol et
	*/
	int sayi1,sayi2;
	printf("iki tane sayi gir: ");
	scanf("%d %d",&sayi1,&sayi2);
	besebolunmekontrol(sayi1,sayi2);


}
