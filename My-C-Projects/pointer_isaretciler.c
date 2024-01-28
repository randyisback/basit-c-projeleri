#include <stdio.h>
int main(){
	
	//Pointerlar
	int a=11;
	int b;
	int *pointerA=&a;
	int *pointerB=&b;
	printf("%d\n",&a);
	printf("%d\n",&b);
	printf("%u\n",pointerA);
	printf("%u\n",pointerB);
}
