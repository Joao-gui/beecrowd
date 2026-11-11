/**
 * @file bee1094.c
 * @author João Guilherme (eng.joaopellacani@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-07-19
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/**
 * @brief Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para 
 * organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano, 
 * quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada.
 * 
 * Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. 
 * Para obter estas informações, ela sabe exatamente o número de experimentos que foram realizados, 
 * o tipo de cobaia utilizada e a quantidade de cobaias utilizadas em cada experimento.
 * 
 * Entrada
 * A primeira linha de entrada contém um valor inteiro N que indica os vários casos de teste que vem a seguir. 
 * Cada caso de teste contém um inteiro Quantia (1 ≤ Quantia ≤ 15) que representa a quantidade de cobaias 
 * utilizadas e um caractere Tipo ('C', 'R' ou 'S'), indicando o tipo de cobaia (R:Rato S:Sapo C:Coelho).
 * 
 * Saída
 * Apresente o total de cobaias utilizadas, 
 * o total de cada tipo de cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas, 
 * sendo que o percentual deve ser apresentado com dois dígitos após o ponto.
 * 
 */

#include <stdio.h>

int main()
{
    int n, quantia,totalC = 0, totalS = 0, totalR = 0, cont = 0;
    float percentualC, percentualS, percentualR,  quantiaTotal = 0.00;
    char tipo;
    scanf("%d", &n);
    do
    {
       scanf("%d", &quantia);
       scanf(" %c", &tipo);
       if (tipo == 'C') //Coelho
       {
            totalC = totalC + quantia;
       }
       
       else if (tipo == 'S') //Sapo
       {
            totalS = totalS + quantia;
       }

       else if (tipo == 'R') //Rato
       {
            totalR = totalR + quantia;
       }
        quantiaTotal = quantiaTotal + quantia;
        cont++;       
    } while (cont < n);

    percentualC = (totalC*100) / quantiaTotal;
    percentualS = (totalS*100) / quantiaTotal;
    percentualR = (totalR*100) / quantiaTotal;

    printf("Total: %.0f cobaias\n", quantiaTotal);
    printf("Total de coelhos: %d\n", totalC);
    printf("Total de ratos: %d\n", totalR);
    printf("Total de sapos: %d\n", totalS);
    printf("Percentual de coelhos: %.2f %%\n", percentualC);
    printf("Percentual de ratos: %.2f %%\n", percentualR);
    printf("Percentual de sapos: %.2f %%\n", percentualS);
    return 0;
}
