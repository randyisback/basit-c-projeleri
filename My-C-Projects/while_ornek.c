#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Turkish");
	/*While alýþtýrmasý
	100 tane numaralandýrýlmýþ iþçilerin 4'e bölünebilenler Maðaza.
	 Diðerleri de Fabrikaya gidecektir.
	 */
	 int iscino=1,magazabolumu=0,fabrikabolumu=0;
	 while(iscino<=100) {
	 	if(iscino%4==0){
	 		printf("%d sayýsý Maðaza bölümüne katýldý.\n", iscino);
	 		
	 		magazabolumu++;
		}else{
	 		printf("%d sayýsý Fabrika bölümüne katýldý.\n", iscino);
	 		fabrikabolumu++;
		 }
		 
		 iscino++;
	 }
	 printf("Maðaza bölümündekilerin sayýsý: %d \n", magazabolumu);
	 printf("Fabrika bölümündekilerin sayýsý: %d \n", fabrikabolumu);


}
