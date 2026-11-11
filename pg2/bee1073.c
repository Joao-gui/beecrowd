/**
 * @file bee1073.c
 * @author João Guilherme (eng.joaopellacani@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-07-19
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/**
 * @brief Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N, inclusive N, se for o caso.
 * 
 * Entrada
 * A entrada contém um valor inteiro N (5 < N < 2000).
 * 
 * Saída
 * Imprima o quadrado de cada um dos valores pares, de 1 até N, conforme o exemplo abaixo.
 * 
 * Tome cuidado! Algumas linguagens tem por padrão apresentarem como saída 1e+006 ao invés de 1000000 o que ocasionará resposta errada.
 *  Neste caso, configure a precisão adequadamente para que isso não ocorra.
 * 
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, nSquare, cont = 1;
    scanf("%d", &n);
    
    if (n > 5 && n < 2000)
    {
        do
        {
            if (cont % 2 == 0 )
            {
                nSquare = pow(cont, 2);
                printf("%d^2 = %d\n", cont, nSquare);
            }
            cont++;            
        } while (cont <= n);
    }   

    return 0;
}
