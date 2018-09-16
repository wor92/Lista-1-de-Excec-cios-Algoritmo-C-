#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

float saBruto, ir = 0.11, inss = 0.08, sind = 0.05, saLiq;


int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Digite seu salario em R$ ");
	scanf("%f", &saBruto);
	
	ir = ir*saBruto;
	inss = inss*saBruto;
	sind = sind*saBruto;
	saLiq = saBruto - ir -inss - sind;
	
		printf("+ Salário Bruto: R$%.2f\n",saBruto);
	printf("- IR(11%%): R$%.2f\n",ir);
	printf("- INSS(8%%): R$%.2f\n",inss);
	printf("- Sindicato(5%%): R$%.2f\n",sind);
	printf("= Salário Líquido: R$%.2f\n",saLiq);
	
	system("pause");
	

	
	
}
