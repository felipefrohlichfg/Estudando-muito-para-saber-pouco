#include <stdio.h>
    int main() {
        int numero1 = 1, resultado;

        printf("Antes incremento %d \n", numero1);
        //numero1 = numero1 +1;
        //numero1 += 1;
        //pós incremento
        //resultado = numero1;
        //numero++

        resultado = numero1++;
        //printf("Após incremento: %d \n", numero1);
        printf("Após pós-incremento - Número 1: %d - Resultado: %d \n", numero1, resultado);
        //numero1 = numero1 -1;
        //numero1 -= 1;
        //numero1--;
        //printf("Após decremento: %d \n", numero1);

        resultado = ++numero1;
        //printf("Após incremento: %d \n", numero1);
        printf("Após pré-incremento - Número 1: %d - Resultado: %d \n", numero1, resultado);

        resultado = numero1--;
        //printf("Após incremento: %d \n", numero1);
        printf("Após pós-decremento - Número 1: %d - Resultado: %d \n", numero1, resultado);

        resultado = --numero1;
        //printf("Após incremento: %d \n", numero1);
        printf("Após pre-decremento - Número 1: %d - Resultado: %d \n", numero1, resultado);






    }