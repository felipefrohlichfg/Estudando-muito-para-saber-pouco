#include <stdio.h>
    int main() {
        int nota1, nota2;
        float nota3, nota4, nota5, nota6, nota7, nota8;
        float media, mediaexatas, mediahumanas;

        printf("Qual a nota de corte para aprovação?\n");
        scanf("%d", &nota1);

        printf("Qual a nota máxima?");
        scanf("%d", &nota2);

        printf("Quanto você tirou em Matematica?");
        scanf("%f", &nota3);

        printf("Quanto você tirou em Portugues?");
        scanf("%f", &nota4);

        printf("Quanto você tirou em Sociologia?");
        scanf("%f", &nota5);

        printf("Quanto você tirou em Fisica?");
        scanf("%f", &nota6);

        printf("Quanto você tirou em Filosofia?");
        scanf("%f", &nota7);

        printf("Quanto você tirou em Ciência da Computação?");
        scanf("%f", &nota8);
        
        media = (nota3 + nota4 + nota5 + nota6 + nota7 + nota8) / 6;

        mediaexatas = (nota3 + nota6 + nota7) / 3;

        mediahumanas = (nota4 + nota5 + nota8) / 3;

        printf("Resumo das suas notas escolares!! \n");
        printf("A nota máxima é: %d \n", nota2);
        printf("A nota de corte é: %d \n", nota1);
        printf("A média das suas notas é: %.2f \n", media);
        printf("A média das suas notas em Exatas foi: %.2f \n", mediaexatas);
        printf("A média das suas notas em Humanas foi: %.2f \n", mediahumanas);
        return 0;
    }




