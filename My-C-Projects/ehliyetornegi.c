
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "Turkish"); //T�rk�e Dil uyumu i�in.
	
	int yas = 0;
	printf("Ya��n�z� giriniz: ");
	scanf("%d",&yas);
	if (yas<18){
		printf("�zg�n�m. Ya��n %d oldu�u i�in ehliyet alamazs�n.", yas);
	}else{
		printf("Verdi�iniz bilgiler i�in Te�ekk�r ederiz. ��leminiz onayland�.");
	}
	return 0;
}
