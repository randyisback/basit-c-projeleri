
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "Turkish"); //Türkçe Dil uyumu için.
	
	int yas = 0;
	printf("Yaþýnýzý giriniz: ");
	scanf("%d",&yas);
	if (yas<18){
		printf("Üzgünüm. Yaþýn %d olduðu için ehliyet alamazsýn.", yas);
	}else{
		printf("Verdiðiniz bilgiler için Teþekkür ederiz. Ýþleminiz onaylandý.");
	}
	return 0;
}
