/**
 * @file bee1074.c
 * @author João Guilherme (eng.joaopellacani@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-07-19
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/**
 * @brief Leia um valor inteiro N. Este valor será a quantidade de valores que serão lidos em seguida. 
 * Para cada valor lido, mostre uma mensagem em inglês dizendo se este valor lido é par (EVEN), 
 * ímpar (ODD), positivo (POSITIVE) ou negativo (NEGATIVE). No caso do valor ser igual a zero (0), 
 * embora a descrição correta seja (EVEN NULL), pois por definição zero é par, seu programa deverá imprimir apenas NULL.
 * 
 * Entrada
 * A primeira linha da entrada contém um valor inteiro N(N < 10000) que indica o número de casos de teste. 
 * Cada caso de teste a seguir é um valor inteiro X (-107 < X <107).
 * 
 * Saída
 * Para cada caso, imprima uma mensagem correspondente, de acordo com o exemplo abaixo. 
 * Todas as letras deverão ser maiúsculas e sempre deverá haver um espaço entre duas palavras impressas na mesma linha.
 * 
 */

#include <stdio.h>

int main(void)
{
    int n1, n, cont = 0;
    scanf("%d", &n1);

    if (n1 < 10000)
    {
        do
        {
            scanf("%d", &n);
            if (n > 0) // POSITIVE
            {
                if (n % 2 == 0) // EVEN (PAR)
                {
                    printf("EVEN POSITIVE\n");
                }

                else if (n % 2 != 0) // ODD (ÍMPAR)
                {
                    printf("ODD POSITIVE\n");
                }               
            }

            else if (n < 0) // NEGATIVE
            {
                if (n % 2 == 0) // EVEN (PAR)
                {
                    printf("EVEN NEGATIVE\n");
                }

                else if (n % 2 != 0) // ODD (ÍMPAR)
                {
                    printf("ODD NEGATIVE\n");
                }               
            }

            else if (n == 0)
            {
                printf("NULL\n");
            }

            cont++;            
            
        } while (cont < n1);
        
    }
    
    return 0;
}
