/**
 * @file bee1045.c
 * @author your name (you@domain.com)
 * @brief 
 * Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados. 
 * A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:
 * - se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
 * - se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
 * - se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
 * - se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
 * - se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
 * - se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
 * 
 * Entrada: A entrada contem três valores de ponto flutuante de dupla precisão A (0 < A) , B (0 < B) e C (0 < C).
 * 
 * Saída: Imprima todas as classificações do triângulo especificado na entrada.
 * 
 * @version 0.1
 * @date 2023-10-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

float crescente(x, y, z);

int main()
{
    float a, b, c, ret[3];
    scanf("%f%f%f", &a, &b, &c);
    ret[3] = crescente(a, b, c);
    printf("%f", ret[1]);
    printf("%f", ret[2]);
    printf("%f", ret[3]);


    return 0;
}

float crescente(x, y, z){
    if (x > y && x > z){
        if (y > z)
        {
            return (x, y, z);
        }
        
    }
    
}