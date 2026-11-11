/**
 * @file bee1079.c
 * @author João Guilherme (eng.joaopellacani@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-07-19
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/**
 * @brief Leia 1 valor inteiro N, que representa o número de casos de teste que vem a seguir. 
 * Cada caso de teste consiste de 3 valores reais, cada um deles com uma casa decimal. 
 * Apresente a média ponderada para cada um destes conjuntos de 3 valores, 
 * sendo que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5.
 * 
 * Entrada
 * O arquivo de entrada contém um valor inteiro N na primeira linha. 
 * Cada N linha a seguir contém um caso de teste com três valores com uma casa decimal cada valor.
 * 
 * Saída
 * Para cada caso de teste, imprima a média ponderada dos 3 valores, conforme exemplo abaixo.
 * 
 */

#include <stdio.h>

int main(void)
{
    int n, cont = 0;
    float number1, number2, number3, result;
    scanf("%d", &n);

    do
    {
        scanf("%f %f %f", &number1, &number2, &number3);
        result = (2*number1 + 3*number2 + 5*number3)/10;
        printf("%.1f\n", result);
        cont++;
    } while (cont < n);   

    return 0;
}
