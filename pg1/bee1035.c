/**
 * @file bee1035.c
 * @author your name (you@domain.com)
 * @brief 
 * 
 * Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que C e se D for maior do que A,
 * e a soma de C com D for maior que a soma de A e B e se C e D, ambos, forem positivos e se a variável A for par escrever a mensagem "Valores aceitos",
 * senão escrever "Valores nao aceitos".
 * 
 * Entrada: Quatro números inteiros A, B, C e D.
 * 
 * Saída: Mostre a respectiva mensagem após a validação dos valores.
 *  
 * @version 0.1
 * @date 2023-10-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main()
{
    int valor_A, valor_B, valor_C, valor_D, soma_CD, soma_AB, par_A;

    scanf("%d%d%d%d", &valor_A, &valor_B, &valor_C, &valor_D);

    if (valor_B > valor_C && valor_D > valor_A)
    {
        soma_CD = valor_C + valor_D;
        soma_AB = valor_A + valor_B;
        if (soma_CD > soma_AB && valor_C > 0 && valor_D > 0)
        {
            par_A = valor_A % 2;
            if (par_A == 0)
            {
                printf("Valores aceitos\n");
            }
            else
            {
                printf("Valores nao aceitos\n");
            }            
        }
        else
        {
            printf("Valores nao aceitos\n");
        }       
    }
    else
    {
        printf("Valores nao aceitos\n");
    }
    return 0;
}