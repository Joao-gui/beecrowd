/**
 * @file bee1064.c
 * @author João Guilherme (eng.joaopellacani@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-07-16
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/**
 * @brief Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. 
 * Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal.
 * 
 * Entrada
 * A entrada contém 6 números que podem ser valores inteiros ou de ponto flutuante. Pelo menos um destes números será positivo.
 * 
 * Saída
 * O primeiro valor de saída é a quantidade de valores positivos. A próxima linha deve mostrar a média dos valores positivos digitados.
 * 
 */

#include <stdio.h>

int main(void)
{
    float media = 0, n, nmedia = 0;
    int cont = 0, quantidade = 0;

    do
    {
        scanf("%f", &n);

        if (n > 0)
        {
            nmedia = n + nmedia;
            quantidade++;
        }

        cont++;        

    } while (cont < 6);

    media = nmedia / quantidade;

    printf("%d valores positivos\n", quantidade);
    printf("%.1f\n", media);
    
    return 0;
}
