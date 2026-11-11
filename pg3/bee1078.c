/**
 * @file bee1078.c
 * @author João Guilherme (eng.joaopellacani@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-07-19
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/**
 * @brief Leia 1 valor inteiro N (2 < N < 1000). A seguir, mostre a tabuada de 
 * N: 1 x N = N      2 x N = 2N        ...       10 x N = 10N
 * 
 * Entrada
 * A entrada contém um valor inteiro N (2 < N < 1000).
 * 
 * Saída
 * Imprima a tabuada de N, conforme o exemplo fornecido.
 * 
 */

#include <stdio.h>

int main(void)
{
    int n, result, cont = 1;
    scanf("%d", &n);

    if (n > 2 && n < 1000)
    {
        do
        {
            result = cont * n;
            printf("%d x %d = %d\n", cont, n, result);
            cont++;
        } while (cont < 11);        
    }   
    return 0;
}
