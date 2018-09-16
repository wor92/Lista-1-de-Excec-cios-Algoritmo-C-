#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

float prc;

int main(){
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite o preço do produto em R$:");
	scanf("%f", &prc);
	
	prc = prc-(prc*0.09);
	
	printf("O preço com disconto de 9%% é R$%.2f", prc);
	
	system("pause");
	
}
