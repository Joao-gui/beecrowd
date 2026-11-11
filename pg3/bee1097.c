/**
 * @file bee1097.c
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
 * Imprima a sequencia conforme exemplo abaixo.
 * 
 */

#include <stdio.h>

int main(void)
{
    int i2 = 1, j = 7, contI = 0;

    for (int i = 0; i < 5; i++)
    {
        do
        {
            printf("I=%d J=%d\n", i2, j);
            j--;
            contI++;
        } while (contI < 3);
        i2 = i2 + 2;
        j = j + 5;
        contI = 0;           
    }
    return 0;
}
