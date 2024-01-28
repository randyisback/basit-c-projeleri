#include <stdio.h>
#include <conio.h>
#include <locale.h>
//int a,b,c;
int a;
int b;
int c;

main(){
	setlocale(LC_ALL, "Turkish");
	a=5;
	b=10;
	c=a+b;
	
	printf("toplama: %d",c);
	c=a-b;
	printf("\nçýkarma: %d",c);
	getche();
}
