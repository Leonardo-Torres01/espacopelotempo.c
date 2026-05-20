#include <stdio.h>
#include "function_espacopelotempo.c"

int main() 
   {
    int erros = 0;

   
    if (espaco(80, 2, 0, 0) != 160) erros++;

   
    if (espaco(40, 2, 0, 0) != 80) erros++;

    
    if (espaco(40, 2, 3, 1) != 86) erros++;

    if (erros == 0) 
    {
        printf("Todos os testes de Espaco: PASSOU\n");
    } 
    else 
    {
        printf("Erro nos testes: %d falha(s)\n", erros);
    }

    printf("Criado por Leonardo Torres");

    return 0;
}
