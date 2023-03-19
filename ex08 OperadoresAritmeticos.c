#include <stdio.h>

int main(){
	
	int a, b, soma, sub, mul, divi;
	
	printf("Digite o valor A: ");
	scanf("%d", &a);
	printf("Digite o valor B: ");
	scanf("%d", &b);
	
	soma = a + b;
	sub = a - b;
	mul = a * b;
	divi = a / b;
	
	printf("Resultados: \n");
	printf("Soma: %d + %d = %d \n", a, b, soma);
	printf("Subtração: %d - %d = %d \n", a, b, sub);
	printf("Multiplicação: %d x %d = %d \n", a, b, mul);
	printf("Divisão: %d / %d = %d \n", a, b, divi);
}


