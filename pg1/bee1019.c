/**
 * @file bee1019.c
 * @author your name (you@domain.com)
 * @brief 
 * 
 * Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.
 * 
 * Entrada: O arquivo de entrada contém um valor inteiro N.
 * 
 * Saída: Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.
 * 
 * @version 0.1
 * @date 2023-10-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main()
{
    int valor_N, valor_S, valor_M, valor_H, resto;

    scanf("%d", &valor_N);

    valor_H = valor_N / 3600;
    resto = valor_N % 3600;
    valor_M = resto / 60;
    valor_S = resto % 60;

    printf("%d:%d:%d\n", valor_H, valor_M, valor_S);
    return 0;
}
