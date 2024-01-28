#include <stdio.h>
#include <locale.h>

int yas;
char saglikbelgesi;
int sinavPuani;
int main(){
	setlocale(LC_ALL, "Turkish");
	printf("## EHLÝYET BAÞVURU ##\n");
	printf("\nYaþýnýzý giriniz: ");
	scanf("%d",&yas);
	if(yas>=18){
		system("cls");
		printf("## AZADCODER EHLÝYET BAÞVURU ##\n\n");
		printf("Saðlýk belgeniz var mý? varsa (E) yoksa (H) tuþuna basýnýz.\n");
		saglikbelgesi=getche();
		if(saglikbelgesi=='E' || saglikbelgesi=='e'){
			char saglikbelgesidurum[5] = "Var";
			system("cls");
			printf("## EHLÝYET BAÞVURU ##\n\n");
			printf("Lütfen Bekleyiniz...");
			sleep(3);
			system("cls");
			printf("## EHLÝYET BAÞVURU ##\n\n");
			printf("Sýnavdan kaç puan aldýnýz?\n");
			scanf("%d",&sinavPuani);
			if(sinavPuani>=70 && sinavPuani<=100){
				system("cls");
				printf("## EHLÝYET BAÞVURU ##\n\n");
				printf("Yaþý: %d\n",yas);
				sleep(2);
				printf("Saðlýk belgesi: %s\n",saglikbelgesidurum);
				sleep(2);
				printf("Sýnav Puaný: %d\n",sinavPuani);
				sleep(2);
				system("color 0A");
				printf("Tebrikler Ehliyet alabilirsiniz.");
				getche();
			}else{
				system("color 0c");
				printf("Sýnavdan en az 70 almanýz gerekiyor.");
			}
		}else if(saglikbelgesi=='H' || saglikbelgesi=='h'){
			char saglikbelgesidurum[5] = "Yok";
			system("cls");
			printf("## EHLÝYET BAÞVURU ##\n\n");
			printf("Yaþý: %d\n",yas);
			sleep(2);
			printf("Saðlýk belgesi: %s\n",saglikbelgesidurum);
			sleep(2);
			system("color 0c");
			printf("Ehliyet þartlarý karþýlanmadý.");
			getche();
		}
	}else{
		system("cls");
		system("color 0c");
		printf("## EHLÝYET BAÞVURU ##\n\n");
		printf("Üzgünüz. 18 yaþýndan büyük olmanýz gerekiyor.");
		getche();
	}
}
