#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int h,m,s;

int main (){
	setlocale(LC_ALL,"portuguese");
	printf("Insira um valor em segundos: ");
	scanf("%d",&s);
	
	h = s /3600;
	m = (s%3600)/60;
	s = (s%3600)%60;
	
	printf("%dh %dm %ds",h,m,s);
	
}
