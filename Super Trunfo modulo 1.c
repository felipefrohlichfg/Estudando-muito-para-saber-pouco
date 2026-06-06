#include <stdio.h>
  int main() {

    char estado[50];
    char capital[50];
    double area;
    int populacao, zipcode;
    
    printf("Qual o nome do Estado? ");
    scanf("%49s", estado);

    printf("Qual o CEP da cidade? ");
    scanf("%d", &zipcode);

    printf("Qual o tamanho da cidade em KM? ");
    scanf("%lf", &area);

    printf("Quantas pessoas moram na cidade? ");
    scanf("%d", &populacao);

    printf("Qual a capital do Estado?");
    scanf("%49s", capital);

    printf("Carta Super Trunfo!!!! \n");
    printf("Nome do Estado: %s \n", estado);
    printf("Cep da cidade: %d \n", zipcode);
    printf("Tamanho do Estado em KMs: %1f \n", area);
    printf("Quantidade de pessoas que moram na cidade: %d \n", populacao);
    printf("Capital do estado: %s \n", capital);

    return 0;
    }
