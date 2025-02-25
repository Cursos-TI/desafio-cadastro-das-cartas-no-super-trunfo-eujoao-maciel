#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Criação das variáveis da carta1
    char estado_carta1;
    char codigo_carta1[4];
    char cidade_carta1[20];
    int populacao_carta1;
    float area_carta1;
    float pib_carta1;
    int pontos_turisticos_carta1;

    // Criação das variáveis da carta2
    char estado_carta2;
    char codigo_carta2[4];
    char cidade_carta2[20];
    int populacao_carta2;
    float area_carta2;
    float pib_carta2;
    int pontos_turisticos_carta2;

    // Interação e solicitação de entrada de valores CARTA 1
    printf("------------Super Trunfo------------\n");
    printf("Carta1: \n");
    printf("Digite o estado (use apenas uma letra [E], [A], [C]...): \n");
    scanf(" %c", &estado_carta1);
    printf("Digite o código (use a letra do estado e adicione um numero de 01 - 04 ex: [A01], [C03]...): \n");
    scanf("%s", codigo_carta1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade_carta1);
    printf("Digite a população: \n");
    scanf("%d", &populacao_carta1);
    printf("Digite a area: \n");
    scanf(" %f", &area_carta1);
    printf("Digite o PIB: \n");
    scanf("%f", &pib_carta1);
    printf("Digite o numero de pontos turisticos: \n");
    scanf( "%d", &pontos_turisticos_carta1);

    // Interação e solicitação de entrada de valores CARTA 2
    printf("------------------------------------------------------\n");
    printf("------------------------------------------------------\n");
    printf("carta2: \n");
    printf("Digite o estado (use apenas uma letra [E], [A], [C]...): \n");
    scanf(" %c", &estado_carta2);
    printf("Digite o código (use a letra do estado e adicione um numero de 01 - 04 ex: [A01], [C03]...): \n");
    scanf(" %s", &codigo_carta2);
    printf("Digite o nome da cidade: \n");
    scanf(" %s", &cidade_carta2);
    printf("Digite a população: \n");
    scanf(" %d", &populacao_carta2);
    printf("Digite a area: \n");
    scanf(" %f", &area_carta2);
    printf("Digite o PIB: \n");
    scanf(" %f", &pib_carta2);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pontos_turisticos_carta2);
    printf("------------------------------------------------------\n");
    printf("------------------------------------------------------\n");

    // Prift das infos da carta01
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado_carta1 );
    printf("Código: %s \n", codigo_carta1);
    printf("Nome da Cidade: %s \n", cidade_carta1);
    printf("População: %d \n", populacao_carta1);
    printf("Área: %0.2f km²\n", area_carta1);
    printf("PIB: %0.2f Bilhões de Reais\n", pib_carta1);
    printf("Pontos Turísticos: %d \n", pontos_turisticos_carta1);
    printf("------------------------------------------------------\n");
    printf("------------------------------------------------------\n");

    // Prift das infos da carta02
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado_carta2 );
    printf("Código: %s \n", codigo_carta2);
    printf("Nome da Cidade: %s \n", cidade_carta2);
    printf("População: %d \n", populacao_carta2);
    printf("Área: %0.2f km²\n", area_carta2);
    printf("PIB: %0.2f Bilhões de Reais \n", pib_carta2);
    printf("Pontos Turísticos: %d \n", pontos_turisticos_carta2);

    return 0;
}
