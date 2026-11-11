/**
 * @file bee1099.c
 * @author João Guilherme (eng.joaopellacani@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-07-23
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/**
 * @brief Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir. 
 * Cada caso de teste consiste de dois inteiros X e Y. Você deve apresentar a soma de todos os ímpares existentes entre X e Y.
 * 
 * Entrada
 * A primeira linha de entrada é um inteiro N que é a quantidade de casos de teste que vem a seguir. 
 * Cada caso de teste consiste em uma linha contendo dois inteiros X e Y.
 * 
 * Saída
 * Imprima a soma de todos valores ímpares entre X e Y.
 * 
 */

#include <stdio.h>

int main(void)
{
    int n, x, y, odd = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &x, &y);
        if (x > y)
        {
            for (int j = 1 + y; j < x; j++)
            {                
                if (y % 2 != 0)
                {
                    odd = odd + y;
                }
            }            
            printf("%d\n", odd);
        }
        else if (y > x)
        {
            for (int j = 1 + x; j < y; j++)
            {
                if (x % 2 != 0)
                {
                    odd = odd + x;
                }
            }            
            printf("%d\n", odd);
        }
        else if (x == y)
        {
            printf("0\n");
        }
        odd = 0;         
    }
    return 0;
}
