#include <stdio.h>
 
int main() {
    printf("Olá, Jogador!\n");
    printf("Bem-vindo ao jogo Super Trunfo!\n");
    printf("CARTA 1\n");

    char Estado;
 printf("Digite o Estado da Carta:");
    scanf("%s", &Estado);
    char Código;
 printf("Digite o Código da Carta:");
    scanf("%s", &Código);
    char Cidade;
 printf("Digite o Nome da Cidade:");
    scanf("%s", &Cidade);
    int População;
 printf("Digite a População:");
    scanf("%i", &População);
    float Área;
 printf("Digite a Área:");
    scanf("%f",&Área);
    float PIB;
 printf("Digite o PIB:");
    scanf("%f",&PIB);
    int Número;
 printf("Digite o Número de Pontos Turisticos:");
    scanf("%i", &Número);
    
    return 0;
}
