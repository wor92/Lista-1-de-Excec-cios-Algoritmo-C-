#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

float num1, num2, num3, med;

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("Insira o primeiro número: ");
	scanf("%f", &num1);
	printf("Insira o segundo número: ");
	scanf("%f", &num2);
	printf("Insira o terceiro número: ");
	scanf("%f", &num3);
	
	med = (num1+num2+num3)/3;
	
	printf("A média dos números %.2f, %2f, %2f, é de %.2f",num1,num2,num3,med);
	
	
}
