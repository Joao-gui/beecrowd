/**
 * @file bee1012.c
 * @author João Guilherme(jaum.gui001@gmail.com)
 * @brief
 * 
 * Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
 * a) a área do triângulo retângulo que tem A por base e C por altura.
 * b) a área do círculo de raio C. (pi = 3.14159)
 * c) a área do trapézio que tem A e B por bases e C por altura.
 * d) a área do quadrado que tem lado B.
 * e) a área do retângulo que tem lados A e B. 
 * 
 * Entrada: O arquivo de entrada contém três valores com um dígito após o ponto decimal.
 * 
 * Saída: O  arquivo de saída deverá conter 5 linhas de dados. Cada linha corresponde a uma das áreas descritas acima, 
 * sempre com mensagem correspondente e um espaço entre os dois pontos e o valor. 
 * O valor calculado deve ser apresentado com 3 dígitos após o ponto decimal.
 * 
 * @version 0.1
 * @date 2023-10-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <math.h>

int main()
{
    float valor_A, valor_B, valor_C, area_TrianguloRet, area_Circulo, area_Trapezio, area_Quadrado, area_Retangulo, pi = 3.14159;

    //printf("Insira 3 valores com dupla precisão:\n");
    //printf("Valor A: ");
    scanf("%f", &valor_A);
    //printf("Valor B: ");
    scanf("%f", &valor_B);
    //printf("Valor C: \n");
    scanf("%f", &valor_C);

    area_TrianguloRet = (valor_A * valor_C) / 2;
    area_Circulo = pi * pow(valor_C,2);
    area_Trapezio = ((valor_A + valor_B)*valor_C) / 2;
    area_Quadrado = pow(valor_B,2);
    area_Retangulo = valor_A * valor_B;

    printf("TRIANGULO: %.3f\n", area_TrianguloRet);
    printf("CIRCULO: %.3f\n", area_Circulo);
    printf("TRAPEZIO: %.3f\n", area_Trapezio);
    printf("QUADRADO: %.3f\n", area_Quadrado);
    printf("RETANGULO: %.3f\n", area_Retangulo);

    return 0;
}
