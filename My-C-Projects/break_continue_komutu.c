#include <stdio.h>
int main(){
	//break continue
	/*break direk bitirir. continue atlama yapar ve devam eder.*/
	int i;
	for(i=1;i<50;i++){
		printf("%d\n",i); //if bundan önce yazýlsaydý 10 sayýsý konsolda gözükmezdi.
		if(i==10){
			
			break;
		}
	}
}
