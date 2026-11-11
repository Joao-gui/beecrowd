/**
 * @file bee1020.c
 * @author your name (you@domain.com)
 * @brief 
 * 
 * Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias
 * 
 * Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias.
 * Nos casos de teste nunca haverá uma situação que permite 12 meses e alguns dias, como 360, 363 ou 364. 
 * Este é apenas um exercício com objetivo de testar raciocínio matemático simples.
 * 
 * Entrada: O arquivo de entrada contém um valor inteiro.
 * 
 * Saída: Imprima a saída conforme exemplo fornecido.
 * 
 * @version 0.1
 * @date 2023-10-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main()
{
    int dias_Corrido, ano, mes, dias, resto;

    scanf("%d", &dias_Corrido);

    ano = dias_Corrido / 365;
    resto = dias_Corrido % 365;
    mes = resto / 30;
    dias = resto % 30;

    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dias);

    return 0;
}
