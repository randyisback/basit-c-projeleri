#include <stdio.h>
#include <locale.h>

int yas;
char saglikbelgesi;
int sinavPuani;
int main(){
	setlocale(LC_ALL, "Turkish");
	printf("## EHL�YET BA�VURU ##\n");
	printf("\nYa��n�z� giriniz: ");
	scanf("%d",&yas);
	if(yas>=18){
		system("cls");
		printf("## AZADCODER EHL�YET BA�VURU ##\n\n");
		printf("Sa�l�k belgeniz var m�? varsa (E) yoksa (H) tu�una bas�n�z.\n");
		saglikbelgesi=getche();
		if(saglikbelgesi=='E' || saglikbelgesi=='e'){
			char saglikbelgesidurum[5] = "Var";
			system("cls");
			printf("## EHL�YET BA�VURU ##\n\n");
			printf("L�tfen Bekleyiniz...");
			sleep(3);
			system("cls");
			printf("## EHL�YET BA�VURU ##\n\n");
			printf("S�navdan ka� puan ald�n�z?\n");
			scanf("%d",&sinavPuani);
			if(sinavPuani>=70 && sinavPuani<=100){
				system("cls");
				printf("## EHL�YET BA�VURU ##\n\n");
				printf("Ya��: %d\n",yas);
				sleep(2);
				printf("Sa�l�k belgesi: %s\n",saglikbelgesidurum);
				sleep(2);
				printf("S�nav Puan�: %d\n",sinavPuani);
				sleep(2);
				system("color 0A");
				printf("Tebrikler Ehliyet alabilirsiniz.");
				getche();
			}else{
				system("color 0c");
				printf("S�navdan en az 70 alman�z gerekiyor.");
			}
		}else if(saglikbelgesi=='H' || saglikbelgesi=='h'){
			char saglikbelgesidurum[5] = "Yok";
			system("cls");
			printf("## EHL�YET BA�VURU ##\n\n");
			printf("Ya��: %d\n",yas);
			sleep(2);
			printf("Sa�l�k belgesi: %s\n",saglikbelgesidurum);
			sleep(2);
			system("color 0c");
			printf("Ehliyet �artlar� kar��lanmad�.");
			getche();
		}
	}else{
		system("cls");
		system("color 0c");
		printf("## EHL�YET BA�VURU ##\n\n");
		printf("�zg�n�z. 18 ya��ndan b�y�k olman�z gerekiyor.");
		getche();
	}
}
