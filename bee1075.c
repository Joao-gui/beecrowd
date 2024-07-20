/**
 * @file bee1075.c
 * @author João Guilherme (eng.joaopellacani@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-07-19
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/**
 * @brief Leia um valor inteiro N. Apresente todos os números entre 1 e 10000 que divididos por N dão resto igual a 2.
 * 
 * Entrada
 * A entrada contém um valor inteiro N (N < 10000).
 * 
 * Saída
 * Imprima todos valores que quando divididos por N dão resto = 2, um por linha.
 * 
 */

#include <stdio.h>

int main()
{
    int n, cont = 1;
    scanf("%d", &n);

    do
    {
        if (cont % n == 2)
        {
            printf("%d\n", cont);
        }
        cont++;        
    } while (cont < 10000);
    

    return 0;
}
