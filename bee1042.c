/**
 * @file bee1042.c
 * @author your name (you@domain.com)
 * @brief 
 * 
 * Leia 3 valores inteiros e ordene-os em ordem crescente.
 * No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.
 * 
 * Entrada: A entrada contem três números inteiros.
 * 
 * Saída: Imprima a saída conforme foi especificado.
 * 
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main()
{
    int numeros[3], numeros3[3], ordem;

    // Inserir os valores
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &numeros[i]);
        numeros3[i] = numeros[i];       
    }

    // Ordenando em ordem crescente
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
        if (numeros3[i] > numeros3 [j])
        {
            ordem = numeros3[i];
            numeros3[i] = numeros3[j];
            numeros3[j] = ordem;
        }        
       }        
    }    

    // Imprimindo em ordem crescente
    for (int i = 2; i >= 0; i--)
    {
        printf("%d\n", numeros3[i]);
    }

    printf("\n");

    // Imprimindo na ordem dos valores digitados
    for (int k = 0; k < 3; k++)
    {
        printf("%d\n", numeros[k]);
    }   

    return 0;
}
