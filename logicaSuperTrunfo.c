// Jogo Super Trunfo - Aluno: Roberth Silva

#include <stdio.h>

// código do jogo Super Trunfo


// primeira carta

int main() {
    char estado[15];
    char carta[10];
    char cidade[20];
    int habitantes;
    double area;
    double PIB;
    unsigned pontos_turisticos;

    // segunda carta
    char estado2[15];
    char carta2[10];
    char cidade2[20];
    int habitantes2;
    double area2;
    double PIB2;
    unsigned pontos_turisticos2;



    // Primeira Carta
        printf("Carta 1\n");
        
        printf("Digite o estado:");
        scanf(" %[^\n]", estado);

        printf("Digite o código da carta:");
        scanf("%s", carta);

        printf("Digite o nome da cidade:");
        scanf(" %[^\n]", cidade);

        printf("Digite o número de habitantes:");
        scanf("%d", &habitantes);

        printf("Digite a área em km²:");
        scanf("%lf", &area);

        printf("Digite o PIB:");
        scanf("%lf", &PIB);

        printf("Digite a quantidade de pontos turísticos:");
        scanf("%d", &pontos_turisticos);


    // Segunda Carta
        printf("Carta 2\n");
        
        printf("Digite o estado:");
        scanf(" %[^\n]", estado2);

        printf("Digite o código da carta:");
        scanf("%s", carta2);

        printf("Digite o nome da cidade:");
        scanf(" %[^\n]", cidade2);

        printf("Digite o número de habitantes:");
        scanf("%d", &habitantes2);

        printf("Digite a área em km²:");
        scanf("%lf", &area2);

        printf("Digite o PIB:");
        scanf("%lf", &PIB2);

        printf("Digite a quantidade de pontos turísticos:");
        scanf("%d", &pontos_turisticos2);

// Calculo Desidade e PIB/CAP
    float densidade_populacional = habitantes / area;
    float pib_per_capita = PIB / habitantes;
    float densidade_populacional2 = habitantes2 / area2;
    float pib_per_capita2 = PIB2 / habitantes2;

// Comparação das Cartas
    printf("Comparação entre as cartas: (Densidade Populacional)\n");
    printf("Carta 1: %s (%s): %.2f\n",cidade, carta, densidade_populacional);
    printf("Carta 2: %s (%s): %.2f\n",cidade2, carta2, densidade_populacional2);
    if (densidade_populacional<densidade_populacional2){
        printf("A carta 1 (%s) venceu", cidade);
    }
    else{
        printf("A carta 2 (%s) venceu", cidade2);
    }
    
    

return 0;
}
