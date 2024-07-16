/**
 * @file bee1066.c
 * @author João Guilherme (eng.joaopellacani@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-07-16
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/**
 * @brief Leia 5 valores Inteiros. 
 * A seguir mostre quantos valores digitados foram pares, quantos valores digitados foram ímpares, 
 * quantos valores digitados foram positivos e quantos valores digitados foram negativos.
 * 
 * Entrada
 * O arquivo de entrada contém 5 valores inteiros quaisquer.
 * 
 * Saída
 * mprima a mensagem conforme o exemplo fornecido, uma mensagem por linha, não esquecendo o final de linha após cada uma.
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, nPar = 0, nImpar = 0, nPositivo = 0, nNegativo = 0, qnt = 0;

    do
    {
        scanf("%d", &n);

        if (n > 0)
        {
            nPositivo++;

            if (abs(n) % 2 == 0)
            {
                nPar++;
            }

            else if (abs(n) % 2 != 0)
            {
                nImpar++;
            }            
        }

        else if (n < 0)
        {
            nNegativo++;

            if (abs(n) % 2 == 0)
            {
                nPar++;
            }

            else if (abs(n) % 2 != 0)
            {
                nImpar++;
            }
        }

        else if (n == 0)
        {
            nPar++;
        }      

        qnt++;       
        
    } while (qnt < 5);

    printf("%d valor(es) par(es)\n", nPar);
    printf("%d valor(es) impar(es)\n", nImpar);
    printf("%d valor(es) positivo(s)\n", nPositivo);
    printf("%d valor(es) negativo(s)\n", nNegativo);
    
    return 0;
}
