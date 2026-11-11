/**
 * @file bee1014.c
 * @author your name (you@domain.com)
 * @brief 
 * 
 * Calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida (em Km) e o total de combustível gasto (em litros).
 * 
 * Entrada: O arquivo de entrada contém dois valores: um valor inteiro X representando a distância total percorrida (em Km), 
 * e um valor real Y representando o total de combustível gasto, com um dígito após o ponto decimal.
 * 
 * Saída: Apresente o valor que representa o consumo médio do automóvel com 3 casas após a vírgula, seguido da mensagem "km/l".
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
    int distancai_Total;
    float combustivel_Gasto, consumo_Medio;

    scanf("%d%f", &distancai_Total, &combustivel_Gasto);

    consumo_Medio = distancai_Total / combustivel_Gasto;

    printf("%.3f km/l\n", consumo_Medio);

    return 0;
}
