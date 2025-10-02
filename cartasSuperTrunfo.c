#include <stdio.h>

struct carta
{
    char estado;
    char codigo[15];
    char cidade[50];
    unsigned long int população;
    float area;
    float PIB;
    int pontos_turisticos;
    float densidade_popu;
    float PIB_percapita;
    float super_poder;
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
    scanf("%lu", &carta1.população);

    printf("Área: \n");
    scanf("%f", &carta1.area);

    printf("PIB: \n");
    scanf("%f", &carta1.PIB);

    printf("Pontos Turísticos \n");
    scanf("%d", &carta1.pontos_turisticos);

    carta1.densidade_popu = (float)carta1.população / carta1.area;
    carta1.PIB_percapita = carta1.PIB / (float)carta1.população;

    // calculo do Super poder carta 1
    carta1.super_poder = (float)carta1.população + carta1.area + carta1.PIB +
                         (float)carta1.pontos_turisticos + carta1.densidade_popu + carta1.PIB_percapita;

    //  casdastrar carta-2
    printf(">>>> digite os dados da carta 2 <<<<\n");

    printf("estado: \n");
    scanf(" %c", &carta2.estado);

    printf("codigo: \n");
    scanf(" %14[^\n]", carta2.codigo);

    printf("cidade: \n");
    scanf(" %49[^\n]", carta2.cidade);

    printf("população: \n");
    scanf("%lu", &carta2.população);

    printf("Área: \n");
    scanf("%f", &carta2.area);

    printf("PIB: \n");
    scanf("%f", &carta2.PIB);

    printf("Pontos Turísticos \n");
    scanf("%d", &carta2.pontos_turisticos);

    carta2.densidade_popu = (float)carta2.população / carta2.area;
    carta2.PIB_percapita = carta2.PIB / (float)carta2.população;

    // calculo do Super poder carta 2
    carta2.super_poder = (float)carta2.população + carta2.area + carta2.PIB +
                         (float)carta2.pontos_turisticos + carta2.densidade_popu + carta2.PIB_percapita;

    // dados cadastrados da carta-1
    printf("\n==== dados da carta 01 ====\n");

    printf("\nestado: %c\n", carta1.estado);
    printf("codigo: %s\n", carta1.codigo);
    printf("cidade: %s\n", carta1.cidade);
    printf("população: %lu\n", carta1.população);
    printf("Área: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.PIB);
    printf("pontos turisticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.f\n", carta1.densidade_popu);
    printf("PIB per Capita: %.2f\n", carta1.PIB_percapita);
    printf("Super Poder : %2.f\n", carta1.super_poder);

    // dados cadastrados da carta-2
    printf("\n==== dados da carta 02 ====\n");

    printf("estado: %c\n", carta2.estado);
    printf("codigo: %s\n", carta2.codigo);
    printf("cidade: %s\n", carta2.cidade);
    printf("população: %d\n", carta2.população);
    printf("Área: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.PIB);
    printf("pontos turisticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f\n", carta2.densidade_popu);
    printf("PIB per Capita: %.2f\n", carta2.PIB_percapita);
    printf("Super Poder : %.2f\n", carta2.super_poder);

    // comparação das cartas
    printf("\n==== comparação de poder entre as duas cartas ====\n");

    printf("População: %s (%d)\n", carta1.população > carta2.população ? "carta 1 venceu" : "carta 2 venceu",
           carta1.população > carta2.população ? 1 : 0);

    printf("Area: %s (%d)\n", carta1.area > carta2.area ? "carta 1 venceu" : "carta 2 venceu",
           carta1.area > carta2.area ? 1 : 0);

    printf("PIB: %s (%d)\n", carta1.PIB > carta2.PIB ? "carta 1 venceu" : "carta 2 venceu",
           carta1.PIB > carta2.PIB ? 1 : 0);

    printf("pontos turisticos: %s (%d)\n", carta1.pontos_turisticos > carta2.pontos_turisticos ?
         "carta 1 venceu" : "carta 2 venceu", carta1.pontos_turisticos > carta2.pontos_turisticos ? 1 : 0);

    //  quem tem a menor densidade populcional (vence)
    printf("Densidade populacional (menor vence): %s (%d)\n", carta1.densidade_popu < carta2.densidade_popu ?
         "carta 1 venceu" : "carta 2 venceu", 
        carta1.densidade_popu < carta2.densidade_popu ? 1 : 0);

    printf("PIB per Capita: %s (%d)\n", carta1.PIB_percapita > carta2.PIB_percapita ?
         "carta 1 venceu" : "carta 2 venceu",
           carta1.PIB_percapita > carta2.PIB_percapita ? 1 : 0);

    printf("Super Poder (maior vende): %s (%d)\n", carta1.super_poder > carta2.super_poder ?
         "carta 1 venceu" : "carta 2 venceu",
        carta1.super_poder > carta2.super_poder ? 1 : 0);

        return 0;
}