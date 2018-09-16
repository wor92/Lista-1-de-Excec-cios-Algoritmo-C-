#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int nr, quad;

int main (){
	setlocale(LC_ALL, "portuguese");
	printf("Digite um número inteiro: ");
	scanf("%d",&nr);
	
	quad = pow(nr,2);
	
	printf("O quadrado de %d é: %d", nr, quad);
	
	system("pause");
	
}
