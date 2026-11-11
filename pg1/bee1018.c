/**
 * @file bee1018.c
 * @author your name (you@domain.com)
 * @brief 
 * 
 * Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. 
 * As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.
 * 
 * Entrada: O arquivo de entrada contém um valor inteiro N(0<N<1000000).
 * 
 * Saída: mprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o exemplo fornecido. 
 * Não esqueça de imprimir o fim de linha após cada linha, caso contrário seu programa apresentará a mensagem: “Presentation Error”.
 * 
 * @version 0.1
 * @date 2023-10-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main()
{
    int valor, valor_to, nota_100 = 0, nota_50 = 0, nota_20 = 0, nota_10 = 0, nota_5 = 0, nota_2 = 0, nota_1 = 0;

    scanf("%d", &valor);
    valor_to = valor; 
    
    do
    {
            if (valor > 99 && valor <= 1000000)
        {
            valor -= 100;
            nota_100 += 1; 
        }
        else if (valor > 49 && valor <= 99)
        {
            valor -= 50;
            nota_50 += 1;
        }
        else if (valor > 19 && valor <= 49)
        {
            valor -= 20;
            nota_20 += 1;
        }
        else if (valor > 9 && valor <= 19)
        {
            valor -= 10;
            nota_10 += 1;
        }
        else if (valor > 4 && valor <= 9)
        {
            valor -= 5;
            nota_5 += 1;
        }
        else if (valor > 1 && valor <= 4)
        {
            valor -= 2;
            nota_2 += 1;
        }
        else if (valor == 1)
        {
            valor -= 1;
            nota_1 += 1;
        }
    } while (valor != 0);
    
    
    
    printf("%d\n", valor_to);
    printf("%d nota(s) de R$ 100,00\n", nota_100);
    printf("%d nota(s) de R$ 50,00\n", nota_50);
    printf("%d nota(s) de R$ 20,00\n", nota_20);
    printf("%d nota(s) de R$ 10,00\n", nota_10);
    printf("%d nota(s) de R$ 5,00\n", nota_5);
    printf("%d nota(s) de R$ 2,00\n", nota_2);
    printf("%d nota(s) de R$ 1,00\n", nota_1);      

    return 0;
}
