#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Turkish");
	/*While al��t�rmas�
	100 tane numaraland�r�lm�� i��ilerin 4'e b�l�nebilenler Ma�aza.
	 Di�erleri de Fabrikaya gidecektir.
	 */
	 int iscino=1,magazabolumu=0,fabrikabolumu=0;
	 while(iscino<=100) {
	 	if(iscino%4==0){
	 		printf("%d say�s� Ma�aza b�l�m�ne kat�ld�.\n", iscino);
	 		
	 		magazabolumu++;
		}else{
	 		printf("%d say�s� Fabrika b�l�m�ne kat�ld�.\n", iscino);
	 		fabrikabolumu++;
		 }
		 
		 iscino++;
	 }
	 printf("Ma�aza b�l�m�ndekilerin say�s�: %d \n", magazabolumu);
	 printf("Fabrika b�l�m�ndekilerin say�s�: %d \n", fabrikabolumu);


}
