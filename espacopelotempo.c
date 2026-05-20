#include <stdio.h>
#include "function_espacopelotempo.c"

int main() 
{
    float v, t, a = 0;
    int opcao;

    printf("--- Calculo de Espaco Percorrido ---\n");
    printf("Digite a velocidade (v): ");
    scanf("%f", &v);
    printf("Digite o tempo (t): ");
    scanf("%f", &t);

    printf("Ha aceleracao? (1 - Sim / 0 - Nao): ");
    scanf("%d", &opcao);

    if (opcao == 1) 
    {
        printf("Digite o valor da aceleracao (a): ");
        scanf("%f", &a);
    }

    float resultado = espaco(v, t, a, opcao);
    printf("\nO espaco percorrido e: %.2f\n", resultado);

  
    printf("Criado por Leonardo Torres");

    return 0;
}
