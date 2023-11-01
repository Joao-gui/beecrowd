/**
 * @file bee1046.c
 * @author your name (you@domain.com)
 * @brief 
 * Leia a hora inicial e a hora final de um jogo. 
 * A seguir calcule a duração do jogo, sabendo que o mesmo pode começar em um dia e terminar em outro, 
 * tendo uma duração mínima de 1 hora e máxima de 24 horas.
 * 
 * Entrada:A entrada contém dois valores inteiros representando a hora de início e a hora de fim do jogo.
 * 
 * Saída:Apresente a duração do jogo conforme exemplo abaixo.
 * @version 0.1
 * @date 2023-10-31
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main()
{
    int horaInicio, horaFim, horaF_I, horaI_F;

    scanf("%d%d", &horaInicio, &horaFim);
    if (horaInicio < horaFim)
    {
        horaF_I = horaFim - horaInicio;
        printf("O JOGO DUROU %d HORA(S)\n", horaF_I);
    }
    else if (horaInicio > horaFim)
    {
        horaI_F = (24 - horaInicio) + horaFim;
        printf("O JOGO DUROU %d HORA(S)\n", horaI_F);
    }
    else if (horaInicio == horaFim)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    return 0;
}
