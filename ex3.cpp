#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

float valor;

int main (){
	setlocale(LC_ALL,"portuguese");
	printf("forne�a um valor qualquer:");
	scanf("%f", &valor);
	valor = valor+(valor * 0.10);
	printf("O novo valor com reajuste de 10%% � de: %.2f ", valor);
}
