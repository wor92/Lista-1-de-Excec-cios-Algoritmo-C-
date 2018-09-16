#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int X1, X2 , Y1 ,Y2;
float dis;

int main (){
	setlocale(LC_ALL, "portuguese");
	printf("Insira valor de x1:");
	scanf("%d", &X1);
	printf("Insira valor de x2:");
	scanf("%d", &X2);
	printf("Insira valor de y1:");
	scanf("%d", &Y1);
	printf("Insira valor de y2:");
	scanf("%d", &Y2);
	
	dis = (pow((X2-X1),2)) + (pow((Y2 -Y1),2));
	dis = sqrt(dis);
	printf("A distancia é: %.2f", dis);
	
	
	
}
