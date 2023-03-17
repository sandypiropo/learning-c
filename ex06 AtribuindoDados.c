 #include <stdio.h>
 
 #define texto "Entrada e saida de dados."
 
int main(){
	printf("%s\n", texto);
	
	int idade = 0;
	float altura = 0.0;
	char nome[50] = "";
	
	printf("Digite a sua idade: \n");
	scanf("%d", &idade);
	
	printf("Digite a sua altura: \n");
	scanf("%f", &altura);
	
	printf("Digite o seu nome: \n");
	scanf("%s", &nome);
	
	printf("Seus dados informados: \n");
	printf("Sua idade: %d. \n", idade);
	printf("Sua altura: %.2f. \n", altura);
	printf("Seu nome: %s. \n", nome);
}
