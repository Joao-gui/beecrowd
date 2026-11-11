/**
 * @file bee1098.c
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

int main()
{
    int i, j;
    float frac;

    for (i = 0; i <= 20; i += 2) {
        frac = i / 10.f;
        for (j = 1; j <= 3; ++j)
            printf("I=%g J=%g\n", frac, j + frac);
    }

    return 0;
}
