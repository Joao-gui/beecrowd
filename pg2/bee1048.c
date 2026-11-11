/**
 * @file bee1048.c
 * @author your name (you@domain.com)
 * @brief 
 *  https://www.beecrowd.com.br/judge/pt/problems/view/1048
 * @version 0.1
 * @date 2023-11-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main()
{
    double salario, novo_salraio, reajuste;

    scanf("%lf", &salario);

    if (salario > 0 && salario <= 400)
    {
        reajuste = salario * 0.15;
        novo_salraio = salario + reajuste;
        printf("Novo salario: %.2lf\n", novo_salraio);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 15 %%\n");
    }
    else if (salario > 400 && salario <= 800)
    {
        reajuste = salario * 0.12;
        novo_salraio = salario + reajuste;
        printf("Novo salario: %.2lf\n", novo_salraio);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 12 %%\n");
    }
    else if (salario > 800 && salario <= 1200)
    {
        reajuste = salario * 0.10;
        novo_salraio = salario + reajuste;
        printf("Novo salario: %.2lf\n", novo_salraio);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 10 %%\n");
    }
    else if (salario > 1200 && salario <= 2000)
    {
        reajuste = salario * 0.07;
        novo_salraio = salario + reajuste;
        printf("Novo salario: %.2lf\n", novo_salraio);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 7 %%\n");
    }
    else if (salario > 2000)
    {
        reajuste = salario * 0.04;
        novo_salraio = salario + reajuste;
        printf("Novo salario: %.2lf\n", novo_salraio);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 4 %%\n");
    }    
    return 0;
}
