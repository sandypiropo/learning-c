#include <stdio.h>

int main(int argc, char *argv[]) {
	
	printf("Treinando escapes em C");
	
	printf("Valor inteiro: %d. \n", 10);
	printf("Valor real: %f. \n", 3.14222);
	printf("Valor real com apenas duas casas: %.2f. \n", 3.14222);
	printf("Dado de texto: %c. \n", 'a');  // dado texto de um únido caractere
	printf("Dado de texto: %s. \n", "testando");
}  
