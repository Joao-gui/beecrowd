/**
 * @file bee1047.c
 * @author your name (you@domain.com)
 * @brief 
 * Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.
 * Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas
 * 
 * Entrada: Quatro números inteiros representando a hora de início e fim do jogo.
 * 
 * Saída: Mostre a seguinte mensagem: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” .
 * @version 0.1
 * @date 2023-11-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main()
{
    int horaInicio, horaFim, min_Inicio, min_Fim , horaI_min, horaF_min, somaI, somaF, soma, resultH, restoM;

    scanf("%d%d%d%d", &horaInicio, &min_Inicio, &horaFim, &min_Fim);
    horaI_min = horaInicio * 60;
    horaF_min = horaFim * 60;
    
    somaI = horaI_min + min_Inicio;
    somaF = horaF_min + min_Fim;

    if (horaInicio < horaFim)
    {
        soma = somaF - somaI;
        resultH = soma / 60;
        restoM = soma % 60;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", resultH, restoM);
    }
    else if (horaInicio > horaFim)
    {
        soma = (1440 - somaI) + somaF;
        resultH = soma / 60;
        restoM = soma % 60;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", resultH, restoM);
    }
    else if (horaInicio == horaFim)
    {
        if (somaI == somaF)
        {
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        }

        else if (somaI > somaF)
        {
            soma = (1440 - somaI) + somaF;
            resultH = soma / 60;
            restoM = soma % 60;

            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", resultH, restoM);
        }
        
        else if (somaI < somaF)
        {
            soma = min_Fim - min_Inicio;
            printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n", soma);
        }        
    }
    return 0;    
}

