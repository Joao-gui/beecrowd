/**
 * @file bee1043.c
 * @author your name (you@domain.com)
 * @brief 
 * 
 * Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo. Em caso positivo, calcule o perímetro do triângulo e apresente a mensagem:
 * 
 * | b - c | < a < b + c
 * | a - c | < b < a + c
 * | a - b | < c < a + b
 * 
 * Perimetro = XX.X
 * 
 * Em caso negativo, calcule a área do trapézio que tem A e B como base e C como altura, mostrando a mensagem
 * 
 * Area = XX.X
 * 
 * Entrada: A entrada contém três valores reais.
 * 
 * Saída: O resultado deve ser apresentado com uma casa decimal.
 * 
 * @version 0.1
 * @date 2023-10-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,area,perimetro,abs_bc, abs_ac, abs_ab;

    scanf("%f%f%f", &a, &b, &c);
    abs_bc = fabs(b - c);
    abs_ac = fabs(a - c);
    abs_ab = fabs(a - b);

    if (abs_bc < a && a < b + c)
    {
        if (abs_ac < b && b < a + c)
        {
            if (abs_ab < c && c < a + b)
            {
                perimetro = a + b + c;
                printf("Perimetro = %.1f\n", perimetro);
            }
            
        }
        
    }
    else
    {
        area = ((a+b)*c) / 2;
        printf("Area = %.1f\n", area);
    }   

    return 0;
}
