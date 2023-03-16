#include <stdio.h>
/*
obter notas
calcular media
ver se foi aprovado ou nao
se media >= 7 aprovado
se nao reprovado
*/
int main(void) {
  // declaração de variaveis em C
  float nota1, nota2, media;
// obter notas  
  printf("Digite a primeira nota: ");
  scanf("%f", &nota1);

  printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
// calcular media
media = (nota1 + nota2)/2;
//verificar se foi aprovado ou nao
  if(media >= 7)
    printf("aprovado");
  else
    printf("reprovado");
  return 0;
}