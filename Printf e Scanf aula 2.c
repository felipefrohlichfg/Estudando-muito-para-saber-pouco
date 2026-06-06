#include <stdio.h>
 
int main() {
    int idade = 26;
    float altura = 1.68;
    double saldoBancario = 1340.67;
    char inicial = 'F';
    char nome[20] = "Felipe";
    char cor[20] = "Azul";
    int distancia = 10;
    float peso = 104.65;
 
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Saldo Bancário: %.2f reais\n", saldoBancario);
    printf("Inicial do Nome: %c\n", inicial);
    printf("Meu nome é %s e tenho %d anos\n", nome, idade);

/* A seguir, você tem uma lista dos principais especificadores utilizados:
%d: Imprime um inteiro no formato decimal.
%i: Equivalente a %d.
%f: Imprime um número de ponto flutuante no formato padrão.
%e: Imprime um número de ponto flutuante na notação científica.
%c: Imprime um único caractere.
%s: Imprime uma cadeia (string) de caracteres.
%.2f Limita a 2 casas decimais
*/

    printf("Qual o seu apelido? ");
    scanf("%s", &nome);
    printf("Bem vindo: %s\n", nome);

    printf("Qual a sua cor favorita? ");
    scanf("%s", &cor);
    printf("Sua cor favorita é: %s\n", cor);

    printf("Quantos KM você corre? ");
    scanf("%d", &distancia);
    printf("Você corre: %d KM's \n", distancia);

    printf("Qual seu peso? ");
    scanf("%.2f", &peso);
    printf("Você pesa: %.2f Kg \n", peso);

    return 0;
}
