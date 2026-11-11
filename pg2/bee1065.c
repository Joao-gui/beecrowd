/**
 * @file bee1065.c
 * @author João Guilherme (eng.joaopellacani@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-07-16
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/**
 * @brief Faça um programa que leia 5 valores inteiros. Conte quantos destes valores digitados são pares e mostre esta informação.
 * 
 * Entrada
 * O arquivo de entrada contém 5 valores inteiros quaisquer.
 * 
 * Saída
 * Imprima a mensagem conforme o exemplo fornecido, indicando a quantidade de valores pares lidos.
 * 
 */

#include <stdio.h>

int main(void)
{
    int qnt = 0, number, numberP = 0;

    do
    {
        scanf("%d", &number);
        if (number % 2 == 0)
        {
            numberP++;
        }
        qnt++;        
    } while (qnt < 5);

    printf("%d valores pares\n", numberP);
    
    return 0;
}
