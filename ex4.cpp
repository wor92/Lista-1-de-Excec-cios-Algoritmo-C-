#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

float num1, num2, num3, med;

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("Insira o primeiro n�mero: ");
	scanf("%f", &num1);
	printf("Insira o segundo n�mero: ");
	scanf("%f", &num2);
	printf("Insira o terceiro n�mero: ");
	scanf("%f", &num3);
	
	med = (num1+num2+num3)/3;
	
	printf("A m�dia dos n�meros %.2f, %2f, %2f, � de %.2f",num1,num2,num3,med);
	
	
}
