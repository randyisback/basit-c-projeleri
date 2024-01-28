//ASCII KOD DÖNGÜSÜ

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Turkish");

int i = 0;
	for(i=0;i<250;i++)
	{
	
		printf("%c --> %d", i, i);
		printf("\n");
	}
	return 0;
}
