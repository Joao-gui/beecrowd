/**
 * @file bee1013.c
 * @author your name (you@domain.com)
 * @brief 
 * 
 * Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula: 
 * maiorAB = (a*b*abs(a-b))/2
 * 
 * Obs.: a fórmula apenas calcula o maior entre os dois primeiros (a e b). Um segundo passo, portanto é necessário para chegar no resultado esperado. 
 * 
 * Entrada: O arquivo de entrada contém três valores inteiros.
 * 
 * Saída: Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".
 * 
 * @version 0.1
 * @date 2023-10-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor_A, valor_B, valor_C, maior;
    scanf("%d%d%d", &valor_A, &valor_B, &valor_C);
    maior = (valor_A + valor_B + abs(valor_A - valor_B)) / 2;
    if (maior < valor_C)
    {
        maior = valor_C;
    }
    printf("%d eh o maior\n", maior);
    return 0;
}
