/**
 * @file bee1052.c
 * @author João Guilherme (eng.joaopellacani@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-07-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/**
 * @brief Leia um valor inteiro entre 1 e 12, inclusive. Correspondente a este valor, 
 * deve ser apresentado como resposta o mês do ano por extenso, em inglês, com a primeira letra maiúscula.
 * 
 * Entrada
 * A entrada contém um único valor inteiro.
 * 
 * Saída
 * Imprima por extenso o nome do mês correspondente ao número existente na entrada, com a primeira letra em maiúscula.
 * 
 */

#include <stdio.h>

int main(void)
{
    int month;
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("January\n");
        break;
    
    case 2:
        printf("February\n");
        break;
    
    case 3:
        printf("March\n");
        break;
    
    case 4:
        printf("April\n");
        break;
    
    case 5:
        printf("May\n");
        break;
    
    case 6:
        printf("June\n");
        break;
    
    case 7:
        printf("July\n");
        break;
    
    case 8:
        printf("August\n");
        break;
    
    case 9:
        printf("September\n");
        break;
    
    case 10:
        printf("October\n");
        break;
    
    case 11:
        printf("November\n");
        break;
    
    case 12:
        printf("December\n");
        break;
    
    default:
        break;
    }
    
    return 0;
}
