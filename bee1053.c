/**
 * @file bee1053.c
 * @author João Guilherme (eng.joaopellacani@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-07-13
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/**
 * @brief Faça um programa que mostre os números pares entre 1 e 100, inclusive.
 * Entrada
 * Neste problema extremamente simples de repetição não há entrada.
 * 
 * Saída
 * Imprima todos os números pares entre 1 e 100, inclusive se for o caso, um em cada linha.
 */

#include <stdio.h>

int main(void)
{
    int number = 1, rest = 0;
    do
    {
        rest = number % 2;

        if (rest == 0)
        {
            printf("%d\n", number);
        }

        number++;

    } while (number <= 100);

    return 0;
}
