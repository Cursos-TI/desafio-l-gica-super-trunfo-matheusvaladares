#include <stdio.h>

int main() {
    // Declaração das váriaveis da carta 1 e 2:
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char nome_cidade1[20], nome_cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float superPoder1, superPoder2;
    char vencedor;
    
    // Cadastro da carta 1:
    printf("Digite a inicial do estado da carta 1: ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta 1: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da carta 1: ");
    scanf("%s", nome_cidade1);

    printf("Digite a população da cidade da carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área em km² da cidade da carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade em bilhões da carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da cidade da carta 1: ");
    scanf("%d", &pontos_turisticos1);

    // Cadastro da carta 2:
    printf("Digite a inicial do estado da carta 2: ");
    scanf(" %c", &estado2);
    
    printf("Digite o código da carta 2: ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade da carta 2: ");
    scanf("%s", nome_cidade2);
    
    printf("Digite a população da cidade da carta 2: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área em km² da cidade da carta 2: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB da cidade em bilhões da carta 2: ");
    scanf("%f", &pib2);
    
    printf("Digite o numero de pontos turisticos da cidade da carta 2: ");
    scanf("%d", &pontos_turisticos2);

    //Calculos de densidade populacional e pib per capita

    densidade_populacional1 = (float) populacao1 / area1;
    densidade_populacional2 = (float) populacao2 / area2;

    pib_per_capita1 = (float) (pib1 * 1000000000) / populacao1;
    pib_per_capita2 = (float) (pib2 * 1000000000) / populacao2;


    //Comparação de cartas

    printf("%s = %d pontos turísticos \n", nome_cidade1, pontos_turisticos1);
    printf("%s = %d pontos turísticos \n", nome_cidade2, pontos_turisticos2);

    if(pontos_turisticos1 > pontos_turisticos2){
        printf("A cidade %s venceu, pois possui mais pontos turisticos. \n", nome_cidade1);
    }else{
        printf("A cidade %s venceu, pois possui mais pontos turisticos.  \n", nome_cidade2);
    }


    return 0;
}
