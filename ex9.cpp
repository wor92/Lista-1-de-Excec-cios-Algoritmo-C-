#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

float a,b,c;


int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Calcular a Hipotenusa seguindo a formula a�+b�=c�\n");
	printf("Digite valor do lado A:");
	scanf("%f", &a);
	printf("Digite valor do lado B:");
	scanf("%f", &b);
	
	c = pow(a,2)+pow(b,2);
	c = sqrt(c);
	
	printf("A medida da hipotenusa � %2.f", c);
	
}
