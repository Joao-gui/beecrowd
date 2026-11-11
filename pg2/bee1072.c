/**
 * @file bee1072.c
 * @author João Guilherme (eng.joaopellacani@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-07-19
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/**
 * @brief Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
 * Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo, mostrando essas informações.
 * 
 * Entrada
 * A primeira linha da entrada contém um valor inteiro N (N < 10000), que indica o número de casos de teste.
 * Cada caso de teste a seguir é um valor inteiro X (-107 < X <107).
 * 
 * Saída
 * Para cada caso, imprima quantos números estão dentro (in) e quantos valores estão fora (out) do intervalo.
 * 
 */

#include <stdio.h>

int main () {

  int x, contout = 0, contin = 0, i, y;

  scanf("%d", &x);

  for (i = 0; i < x; i++){

    scanf("%d", &y);
    if (y >= 10 && y <= 20){

      contin++;

    }
    else{

      contout++;

    }
  }

  printf("%d in\n", contin);
  printf("%d out\n", contout);

}
