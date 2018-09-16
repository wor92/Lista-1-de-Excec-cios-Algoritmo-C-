#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

float far, cel;


int main(){
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite temperatura em Farenheit: ");
	scanf("%f", &far);
	
	cel = (5*(far - 32))/9;
	
	printf("A temperatura %.1fºF em Celsius é %.1fºC",far,cel);
	
}
