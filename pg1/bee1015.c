/**
 * @file bee1015.c
 * @author your name (you@domain.com)
 * @brief 
 * 
 * Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano,
 * p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula:
 * 
 * distância = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2))
 * 
 * Entrada: O arquivo de entrada contém duas linhas de dados. A primeira linha contém dois valores de ponto flutuante: 
 * x1 y1 e a segunda linha contém dois valores de ponto flutuante x2 y2.
 * 
 * Saída: Calcule e imprima o valor da distância segundo a fórmula fornecida, com 4 casas após o ponto decimal.
 * 
 * @version 0.1
 * @date 2023-10-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2, dist;

    //p(x1,y1)
    scanf("%f%f", &x1,&y1);
    //p(x2,y2)
    scanf("%f%f", &x2,&y2);

    dist = sqrt(pow((x2-x1),2) + pow((y2-y1),2));

    printf("%.4f\n", dist);
    return 0;
}
