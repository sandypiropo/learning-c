#include <stdio.h>
#include <time.h>

int main() {
    int dia, mes, ano, idade;
    time_t agora = time(NULL); // Obter a data e hora atual
    struct tm *dataAtual = localtime(&agora); // Converter para struct tm
    
    printf("Digite sua data de nascimento (DD MM AAAA): ");
    scanf("%d %d %d", &dia, &mes, &ano);
    
    idade = dataAtual->tm_year + 1900 - ano; // Calcular a idade baseado no ano de nascimento
    if (mes > dataAtual->tm_mon + 1 || (mes == dataAtual->tm_mon + 1 && dia > dataAtual->tm_mday)) {
        idade--; // Subtrair 1 se o aniversário ainda não ocorreu este ano
    }
    
    printf("Sua idade é %d anos.\n", idade);
    
    return 0;
}

