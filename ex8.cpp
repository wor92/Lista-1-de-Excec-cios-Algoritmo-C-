#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int anoNasc, anoAtual;

int main(){
	setlocale(LC_ALL ,"portuguese");
	
	printf("Digite ano de nascimento: ");
	scanf("%d", &anoNasc);
	
	printf("Digite ano atual: ");
	scanf("%d", &anoAtual);
	
		
	printf("Sua idade é %d anos: " ,(anoAtual - anoNasc));
	
}
