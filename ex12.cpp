#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

float d,r,s;
int a,b,c;


int main(){
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	printf("Digite o valor de C: ");
	scanf("%d", &c);
	
	r = pow((a+b),2);
	s = pow((b+c),2);
	d = (r+s)/2;
	
	printf ("O valor da equação D = (R + S) / 2 é igual a: %.2f",d);
	
	
}
