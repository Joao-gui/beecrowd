/**
 * @file bee1016.c
 * @author your name (you@domain.com)
 * @brief 
 * 
 * Dois carros (X e Y) partem em uma mesma direção. O carro X sai com velocidade constante de 60 Km/h e o carro Y sai com velocidade constante de 90 Km/h.
 * Em uma hora (60 minutos) o carro Y consegue se distanciar 30 quilômetros do carro X, ou seja, consegue se afastar um quilômetro a cada 2 minutos.
 * Leia a distância (em Km) e calcule quanto tempo leva (em minutos) para o carro Y tomar essa distância do outro carro.
 * 
 * Entrada: O arquivo de entrada contém um número inteiro.
 * 
 * Saída:  Imprima o tempo necessário seguido da mensagem "minutos".
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
    int dist_km, temp;

    scanf("%d", &dist_km);
    temp = dist_km * 2;

    printf("%d minutos\n", temp);
    return 0;
}
