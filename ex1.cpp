#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int num;

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("Insira um n�mero inteiro: ");
	scanf("%d", &num);
	
	printf("O n�mero anteriro de %d �: %d �: %d\n" , num, (num-1));
	printf("O n�mero sucessor de %d �: %d �: %d\n" , num, (num+1));
}
