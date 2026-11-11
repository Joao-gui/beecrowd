/**
 * @file bee1071.c
 * @author João Guilherme (eng.joaopellacani@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-07-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/**
 * @brief Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.
 * 
 * Entrada
 * O arquivo de entrada contém dois valores inteiros.
 * 
 * Saída
 * O programa deve imprimir um valor inteiro. Este valor é a soma dos valores ímpares que estão entre os valores fornecidos na entrada que deverá caber em um inteiro.
 * 
 */

#include <stdio.h>

int main()
{
 int x, y, sum = 0, i;
 int min, max;

 scanf("%d%d", &x,&y);

 if(x < y){
  min = x;
  max = y;
 }else{
  max = x;
  min = y;
 }

 for(i = (min + 1); i < max; ++i)
 {
  if(i % 2 != 0){
   sum += i;
  }
 }

 printf("%d\n", sum);

 return 0;
}
