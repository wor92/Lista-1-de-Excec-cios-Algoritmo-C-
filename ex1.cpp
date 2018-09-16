#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int num;

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("Insira um número inteiro: ");
	scanf("%d", &num);
	
	printf("O número anteriro de %d é: %d é: %d\n" , num, (num-1));
	printf("O número sucessor de %d é: %d é: %d\n" , num, (num+1));
}
