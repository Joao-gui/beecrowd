/**
 * @file bee1060.c
 * @author João Guilherme (eng.joaopellacani@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-07-15
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/**
 * @brief Faça um programa que leia 6 valores. Estes valores serão somente negativos ou positivos (desconsidere os valores nulos).
 * A seguir, mostre a quantidade de valores positivos digitados.
 * 
 * Entrada
 * Seis valores, negativos e/ou positivos.
 * 
 * Saída
 * Imprima uma mensagem dizendo quantos valores positivos foram lidos. 
 */

#include <stdio.h>

int main(void)
{
    float n;
    int npositivo = 0;

    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &n);

        if (n > 0)
        {
            npositivo++;
        }        
    }

    printf("%d valores positivos\n", npositivo);
    
    return 0;
}
