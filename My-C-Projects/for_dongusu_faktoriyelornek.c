#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Turkish");
	/*for alýþtýrmasý
	Dýþarýdan girilen bir sayýnýn faktöriyelini hesaplayan bir program
	*/
	int faktoriyel=1,i,sayi;
	printf("Bir sayý girin:");
	scanf("%d",&sayi);
	for(i=1;i<=sayi;i++){
		faktoriyel*=i;
		
		
		
	}
	printf("%d! = 12.%d",sayi,faktoriyel);
	

	return 0;
}
