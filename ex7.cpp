#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

float hAula,inss,salario;
int nrAula;


int main(){
	setlocale(LC_ALL,"portuguese");
	printf("Informe a quantidade de aulas dadas: ");
	scanf("%d" ,&nrAula);
	printf("Digite valor recebido por hora/aula R$ ");
	scanf("%f",&hAula);
	printf("Insira a porcentagem de desconto do INSS: ");
	scanf("%f",&inss);
	
	inss = inss/100;
	salario = (nrAula*hAula);
	salario = salario-(salario*inss);
	
	printf("O salário do professor será de R$%2.f", salario);
	
	
	
}
