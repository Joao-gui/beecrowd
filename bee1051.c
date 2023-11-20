/**
 * @file bee1051.c
 * @author your name (you@domain.com)
 * @brief 
 * Verifciar enunciado no site.
 * @version 0.1
 * @date 2023-11-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main(){
    double sal;
    scanf("%lf", &sal);
    
    if(sal <= 2000.00){
        printf("Isento\n");
    }else if (sal >= 2000.01 && sal <= 3000.00){
          printf("R$ %.2f\n", (sal - 2000.00)*0.08);
    }else if (sal >= 3000.01 && sal <= 4500.00){
          printf("R$ %.2f\n", ((sal - 3000.00)*0.18 + 1000.00*0.08));
    }else if (sal >= 4500.01){
          printf("R$ %.2f\n", ((sal - 4500.00)*0.28 + 1500.00*0.18 + 1000.00*0.08));
    }
    return 0;
}
