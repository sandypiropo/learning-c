// EX1- Crie um programa em C que receba um n�mero inteiro e uma fun��o que retorne 1 se o n�mero digitado for positivo ou retorne zero se o n�mero for negativo.
#include <stdio.h>
#include <stdlib.h>>

int verificar_numero(int n); //prot�tipo da fun��o
int main(void){
	
	int numero, retorno;
	do
	{
	printf("Digite um numero inteiro diferente de zero: ");
	scanf("%d", &numero);	
	 }while(numero == 0);
	
	retorno = verificar_numero(numero); //chamda da fun��o
	
	if(retorno == 1)
		printf("O numero %d e positivo! \n", numero);
	else 
		printf("O numero %d e negativo \n", numero);
	
	system ("pause");
	return 0;
}
//corpo da fun��o

int verificar_numero(int n)
{
	int r;
	if(n > 0)
		r = 1;
	else
		r = 0;
	return(r);
}
