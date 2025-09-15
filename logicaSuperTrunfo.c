// Jogo Super Trunfo - Aluno: Roberth Silva

#include <stdio.h>

// código do jogo Super Trunfo


// primeira carta

int main() {
    char estado[15]= "Pará";
    char carta[10]= "PA01";
    char cidade[20]= "Belém";
    int habitantes= 1398531;
    double area= 1059.458;
    double PIB= 30835763.45;
    unsigned pontos_turisticos=10;

    // segunda carta
    char estado2[15]="Pará";
    char carta2[10]="PA02";
    char cidade2[20]="Paragominas";
    int habitantes2=105538;
    double area2=19342.254;
    double PIB2=3777292.01;
    unsigned pontos_turisticos2=10;

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
