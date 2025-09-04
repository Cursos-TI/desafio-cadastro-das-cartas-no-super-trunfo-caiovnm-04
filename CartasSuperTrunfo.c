#include <stdio.h>

struct carta
{
    char estado;
    char codigo[15];
    char cidade[50];
    int população;
    float area;
    float PIB;
    int pontos_turisticos;
    float dencidade_popu;
    float PIB_percapita;
};

int main()
{

    // declaração das 2 cartas;
    struct carta carta1, carta2;

    // cadastrar carta-1
    printf(">>>> digite os dados da carta 1 <<<<\n");

    printf("estado: \n");
    scanf(" %c", &carta1.estado);

    printf("codigo: \n");
    scanf(" %14[^\n]", carta1.codigo);

    printf("cidade: \n");
    scanf(" %49[^\n]", carta1.cidade);

    printf("população: \n");
    scanf("%d", &carta1.população);

    printf("Área: \n");
    scanf("%f", &carta1.area);

    printf("PIB: \n");
    scanf("%f", &carta1.PIB);

    printf("Pontos Turísticos \n");
    scanf("%d", &carta1.pontos_turisticos);

    carta1.dencidade_popu = (float)carta1.população / carta1.area;
    carta1.PIB_percapita = carta1.PIB / (float)carta1.população;

    // casdastrar carta-2
    printf(">>>> digite os dados da carta 2 <<<<\n");

    printf("estado: \n");
    scanf(" %c", &carta2.estado);

    printf("codigo: \n");
    scanf(" %14[^\n]", carta2.codigo);

    printf("cidade: \n");
    scanf(" %49[^\n]", carta2.cidade);

    printf("população: \n");
    scanf("%d", &carta2.população);

    printf("Área: \n");
    scanf("%f", &carta2.area);

    printf("PIB: \n");
    scanf("%f", &carta2.PIB);

    printf("Pontos Turísticos \n");
    scanf("%d", &carta2.pontos_turisticos);

    carta2.dencidade_popu = (float)carta2.população / carta2.area;
    carta2.PIB_percapita = carta2.PIB / (float)carta2.população;

    // dados cadastrados da carta-1
    printf("\n==== dados da carta 01 ====\n");

    printf("estado: %c\n", carta1.estado);
    printf("codigo: %s\n", carta1.codigo);
    printf("cidade: %s\n", carta1.cidade);
    printf("população: %d\n", carta1.população);
    printf("Área: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.PIB);
    printf("pontos turisticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.f\n", carta1.dencidade_popu);
    printf("PIB per Capita: %.2f\n", carta1.PIB_percapita);
    

    // dados cadastrados da carta-2
    printf("\n==== dados da carta 02 ====\n");

    printf("estado: %c\n", carta2.estado);
    printf("codigo: %s\n", carta2.codigo);
    printf("cidade: %s\n", carta2.cidade);
    printf("população: %d\n", carta2.população);
    printf("Área: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.PIB);
    printf("pontos turisticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f\n", carta2.dencidade_popu);
    printf("PIB per Capita: %.2f\n", carta2.PIB_percapita);

    return 0;
}