/**
 * @file bee1036.c
 * @author your name (you@domain.com)
 * @brief 
 * 
 * Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara.
 * Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo.
 * 
 * Entrada: Leia três valores de ponto flutuante (double) A, B e C.
 * 
 * Saída:Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular". 
 * Caso contrário, imprima o resultado das raízes com 5 dígitos após o ponto, com uma mensagem correspondente conforme exemplo abaixo. 
 * Imprima sempre o final de linha após cada mensagem.
 * 
 * @version 0.1
 * @date 2023-10-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <math.h>

int main()
{
    double valor_A, valor_B, valor_C, delta, r1, r2;
    
    scanf("%lf%lf%lf", &valor_A, &valor_B, &valor_C);
    delta = pow(valor_B, 2) - (4 * valor_A * valor_C);
    if (delta < 0 || valor_A == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        // Valor positivo
        r1 = (-valor_B + sqrt(delta)) / (2 * valor_A);
        // Valor negativo
        r2 = (-valor_B - sqrt(delta)) / (2 * valor_A);
        printf("R1 = %.5lf\n", r1);
        printf("R2 = %.5lf\n", r2);
    }   
    return 0;
}
