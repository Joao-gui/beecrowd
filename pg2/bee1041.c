/**
 * @file bee1041.c
 * @author your name (you@domain.com)
 * @brief 
 * 
 * Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto em um plano. 
 * A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem (x = y = 0).
 * Se o ponto estiver na origem, escreva a mensagem “Origem”.
 * Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação.
 * 
 * Entrada: A entrada contem as coordenadas de um ponto.
 * 
 * Saída: A saída deve apresentar o quadrante em que o ponto se encontra.
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main()
{
    float x, y;

    scanf("%f%f", &x, &y);

    if (x > 0 && y > 0)
    {
        printf("Q1\n");
    }
    else if (x > 0 && y < 0)
    {
        printf("Q4\n");
    }
    else if (x < 0 && y > 0)
    {
        printf("Q2\n");
    }
    else if (x < 0 && y < 0)
    {
        printf("Q3\n");
    }
    else if (x == 0 && y != 0)
    {
        printf("Eixo Y\n");
    }
    else if (x != 0 && y == 0)
    {
        printf("Eixo X\n");
    }
    else if (x == 0 && y == 0)
    {
        printf("Origem\n");
    }
    return 0;
}
