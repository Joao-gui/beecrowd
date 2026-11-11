/**
 * @file bee1070.c
 * @author João Guilherme (eng.joaopellacani@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-07-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/**
 * @brief Leia um valor inteiro X. Em seguida apresente os 6 valores ímpares consecutivos a partir de X, um valor por linha, inclusive o X ser for o caso.
 * 
 * Entrada
 * A entrada será um valor inteiro positivo.
 * 
 * Saída
 * A saída será uma sequência de seis números ímpares.
 * 
 */

#include <stdio.h>

int main(void)
{
    int n, cont = 0;
    scanf("%d", &n);
    do
    {        
        if (n % 2 != 0)
        {
            printf("%d\n", n);
            cont++;
        }

        n++;
        
    } while (cont < 6);
    
    return 0;
}
