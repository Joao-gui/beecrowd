/**
 * @file bee1080.c
 * @author João Guilherme (eng.joaopellacani@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-07-19
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/**
 * @brief Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.
 * 
 * Entrada
 * O arquivo de entrada contém 100 números inteiros, positivos e distintos.
 * 
 * Saída
 * Apresente o maior valor lido e a posição de entrada, conforme exemplo abaixo.
 * 
 */

#include <stdio.h>

int main(void)
{
    int n, maior = 0, posicao = 0, cont = 1;
    do
    {
        scanf("%d", &n);
        if (n > maior)
        {
            maior = n;
            posicao = cont;
        }

        cont++;
        
    } while (cont <= 100);

    printf("%d\n", maior);
    printf("%d\n", posicao);
    
    return 0;
}
