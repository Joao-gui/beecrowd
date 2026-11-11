/**
 * @file bee1044.c
 * @author your name (you@domain.com)
 * @brief 
 * Leia 2 valores inteiros (A e B). Após, o programa deve mostrar uma mensagem "Sao Multiplos" ou "Nao sao Multiplos", 
 * indicando se os valores lidos são múltiplos entre si.
 * 
 * Entrada:A entrada contém valores inteiros.
 * 
 * Saída:A saída deve conter uma das mensagens conforme descrito acima.
 * @version 0.1
 * @date 2023-10-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main()
{
    int a,b, result;

    scanf("%d%d", &a, &b);
    if (a > b)
    {
        result = a % b;
    }
    else if (b > a)
    {
        result = b % a;
    }   
    
    if (result != 0)
    {
        printf("Nao sao Multiplos\n");
    }
    else
    {
        printf("Sao Multiplos\n");
    }    
    return 0;
}
