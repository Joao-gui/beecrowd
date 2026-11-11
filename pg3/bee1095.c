/**
 * @file bee1095.c
 * @author João Guilherme (eng.joaopellacani@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-07-23
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/**
 * @brief Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.
 * 
 * Entrada
 * Não há nenhuma entrada neste problema.
 * 
 * Saída
 * Imprima a sequencia conforme exemplo abaixo
 * 
 */

#include <stdio.h>

int main(void)
{
    int i = 1, j = 60;

    do
    {
        printf("I=%d J=%d\n", i, j);
        i = i + 3;
        j = j - 5;
    } while (j >= 0);  

    return 0;
}
