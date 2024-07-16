/**
 * @file bee1067.c
 * @author João Guilherme (eng.joaopellacani@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-07-16
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/**
 * @brief Leia um valor inteiro X (1 <= X <= 1000). Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X, se for o caso.
 * 
 * Entrada
 * O arquivo de entrada contém 1 valor inteiro qualquer.
 * 
 * Saída
 * Imprima todos os valores ímpares de 1 até X, inclusive X, se for o caso.
 * 
 */

#include <stdio.h>

int main()
{
    int n, cont = 0;

    scanf("%d", &n);

    if (n>= 1 && n <= 1000)
    {
        do
        {
            if (cont % 2 != 0)
            {
                printf("%d\n", cont);
            }

            cont++;
            
        } while (n >= cont);        
    }    
    return 0;
}
