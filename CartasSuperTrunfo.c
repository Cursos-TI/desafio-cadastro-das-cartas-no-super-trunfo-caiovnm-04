#include <stdio.h>

struct carta
{
    int população;
    float area;
    float PIB;
    int pontos_turisticos;
};

int main()
{

    // declaração das 2 cartas;
    struct carta carta1, carta2;

    // cadastrar carta-1
    printf(">>>> digite os dados da carta 1 <<<<\n");

    printf("população: \n");
    scanf("%d", &carta1.população);

    printf("Área: \n");
    scanf("%f", &carta1.area);

    printf("PIB: \n");
    scanf("%f", &carta1.PIB);

    printf("Pontos Turísticos \n");
    scanf("%d", &carta1.pontos_turisticos);

    // casdastrar carta-2
    printf(">>>> digite os dados da carta 2 <<<<\n");

    printf("população: \n");
    scanf("%d", &carta2.população);

    printf("Área: \n");
    scanf("%f", &carta2.area);

    printf("PIB: \n");
    scanf("%f", &carta2.PIB);

    printf("Pontos Turísticos \n");
    scanf("%d", &carta2.pontos_turisticos);

    // dados cadastrados da carta-1
    printf("\n==== dados da carta 01 ====\n");

    printf("população: %d\n", carta1.população);
    printf("Área: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.PIB);
    printf("pontos turisticos: %d\n", carta1.pontos_turisticos);

    // dados cadastrados da carta-2
    printf("\n==== dados da carta 02 ====\n");

    printf("população: %d\n", carta2.população);
    printf("Área: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.PIB);
    printf("pontos turisticos: %d\n", carta2.pontos_turisticos);

    return 0;
}