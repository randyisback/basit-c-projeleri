#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Turkish");
	/*for al��t�rmas�
	D��ar�dan girilen bir say�n�n fakt�riyelini hesaplayan bir program
	*/
	int faktoriyel=1,i,sayi;
	printf("Bir say� girin:");
	scanf("%d",&sayi);
	for(i=1;i<=sayi;i++){
		faktoriyel*=i;
		
		
		
	}
	printf("%d! = 12.%d",sayi,faktoriyel);
	

	return 0;
}
