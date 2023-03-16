#include <stdio.h>
// Exercício com intuito de se acostumar com declarações
// de variaveis em C por meio da repetição continua de printf e scanf

int main () {
	
	int idade = 0;
	
	printf("Idade = %d. \n", idade);
	printf("Digite uma idade: ");
	scanf("%d", &idade);
	printf("Idade = %d. \n", idade);
	
	int numero_favorito = 1;
	
	printf("Numero favorito %d. \n", numero_favorito);
	printf("Digite seu numero favorito: ");
	scanf("%d", &numero_favorito);
	printf("Numero informado: %d. \n", numero_favorito);
	
	float peso = 0.0;
	
	printf("Digite seu peso: \n");
	scanf("%f", &peso); 
	printf("Peso informado = %.2f. \n", peso);
	
	int ano = 1950;
	int ano_atual= 0;
	
	printf("Ultimo ano informado %d. \n", ano);
	printf("Em que ano estamos? ");
	scanf("%d", &ano_atual);
	printf("Ano antigo %d foi atualizado para %d.", ano, ano_atual);
}


