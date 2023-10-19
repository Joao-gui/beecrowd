/**
 * @file bee1038.c
 * @author your name (you@domain.com)
 * @brief 
 * 
 * Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.
 * !tabela no site!
 * 
 * Entrada: O arquivo de entrada contém dois valores inteiros correspondentes ao código e à quantidade de um item conforme tabela acima.
 * 
 * Saída: O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas após o ponto decimal.
 * 
 * @version 0.1
 * @date 2023-10-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main()
{
    int codigo, quantidade;
    float cachorro_Quente, x_Salada, x_Bacon, torrada_Simples, refri;

    scanf("%d%d", &codigo, &quantidade);

    switch (codigo)
    {
    case 1:
        cachorro_Quente = 4 * quantidade;
        printf("Total: R$ %.2f\n", cachorro_Quente);
        break;
    case 2:
        x_Salada = 4.5 * quantidade;
        printf("Total: R$ %.2f\n", x_Salada);
        break;
    case 3:
        x_Bacon = 5 * quantidade;
        printf("Total: R$ %.2f\n", x_Bacon);
        break;
    case 4:
        torrada_Simples = 2 * quantidade;
        printf("Total: R$ %.2f\n", torrada_Simples);
        break;
    case 5:
        refri = 1.5 * quantidade;
        printf("Total: R$ %.2f\n", refri);
        break;    
    default:
        break;
    }

    return 0;
}
