#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

float s,a,b,c,area;

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Digite lado A do triangulo: ");
	scanf("%f", &a);
	printf("Digite lado B do triangulo: ");
	scanf("%f", &b);
	printf("Digite lado C do triangulo: ");
	scanf("%f", &c);
	
	s = (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	
	printf("A Area do triangulo é: %.2f ", area);
	
}
