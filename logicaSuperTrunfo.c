// Jogo Super Trunfo - Aluno: Roberth Silva

#include <stdio.h>

// código do jogo Super Trunfo




int main() {


    // primeira carta
    char estado[15]= "Pará";
    char carta[10]= "PA01";
    char cidade[20]= "Belém";
    unsigned int habitantes= 1398531;
    double area= 1059.458;
    double PIB= 30835763.45;
    unsigned pontos_turisticos=10;

    // segunda carta
    char estado2[15]="Pará";
    char carta2[10]="PA02";
    char cidade2[20]="Paragominas";
    unsigned int habitantes2=105538;
    double area2=19342.254;
    double PIB2=3777292.01;
    unsigned pontos_turisticos2=10;

    // Calculo Desidade e PIB/CAP
    float densidade_populacional = habitantes / area;
    float pib_per_capita = PIB / habitantes;
    float densidade_populacional2 = habitantes2 / area2;
    float pib_per_capita2 = PIB2 / habitantes2;


    int menu1;
    int menu2;
    printf("Escolha uma das opções\n");
    printf("1 - Iniciar o jogo\n");
    printf("2 - Regras do jogo\n");
    printf("3 - Sair\n");
    scanf("%d", &menu1);

switch (menu1)
{
case 1:
printf("Escolha o atributo de comparação\n");
printf("1 - População\n");
printf("2 - Área\n");
printf("3 - PIB\n");
printf("4 - Pontos Turísticos\n");
printf("5 - Densidade Demográfica\n");
scanf("%d", &menu2);

    switch (menu2)
    {
    case 1:
    // Comparação das Cartas
    printf("Comparação entre as cartas\n");
    printf("Atributo utilizado: População\n");
    printf("Carta 1: %s (%s): %d de habitantes\n",cidade, carta, habitantes);
    printf("Carta 2: %s (%s): %d de habitantes\n",cidade2, carta2, habitantes2);
    if (habitantes>habitantes2){
        printf("A carta 1 (%s) venceu", cidade);
    }
    else if(habitantes2>habitantes){
        printf("A carta 2 (%s) venceu", cidade2);
    }
    else{
        printf("Empate!!!");
    }

        break;

    case 2:
        // Comparação das Cartas
    printf("Comparação entre as cartas\n");
    printf("Atributo utilizado: Área\n");
    printf("Carta 1: %s (%s): %.2f km²\n",cidade, carta, area);
    printf("Carta 2: %s (%s): %.2f km²\n",cidade2, carta2, area2);
    if (area>area2){
        printf("A carta 1 (%s) venceu", cidade);
    }
    else if(area2>area){
        printf("A carta 2 (%s) venceu", cidade2);
    }
    else{
        printf("Empate!!!");
    }
        break;
    
    case 3:
            // Comparação das Cartas
    printf("Comparação entre as cartas\n");
    printf("Atributo utilizado: PIB\n");
    printf("Carta 1: %s (%s): %.2f mil\n",cidade, carta, PIB);
    printf("Carta 2: %s (%s): %.2f mil\n",cidade2, carta2, PIB2);
    if (PIB>PIB2){
        printf("A carta 1 (%s) venceu", cidade);
    }
    else if(PIB2>PIB){
        printf("A carta 2 (%s) venceu", cidade2);
    }
    else{
        printf("Empate!!!");
    }
        break;

    case 4:
            // Comparação das Cartas
    printf("Comparação entre as cartas\n");
    printf("Atributo utilizado: Pontos Turísticos\n");
    printf("Carta 1: %s (%s): %d\n",cidade, carta, pontos_turisticos);
    printf("Carta 2: %s (%s): %d\n",cidade2, carta2, pontos_turisticos2);
    if (pontos_turisticos>pontos_turisticos2){
        printf("A carta 1 (%s) venceu", cidade);
    }
    else if(pontos_turisticos2>pontos_turisticos){
        printf("A carta 2 (%s) venceu", cidade2);
    }
    else{
        printf("Empate!!!");
    }
        break;

    case 5:
            // Comparação das Cartas
    printf("Comparação entre as cartas\n");
    printf("Atributo utilizado: Densidade Demográfica\n");
    printf("Carta 1: %s (%s): %.2f\n",cidade, carta, densidade_populacional);
    printf("Carta 2: %s (%s): %.2f\n",cidade2, carta2, densidade_populacional2);
    if (densidade_populacional2>densidade_populacional){
        printf("A carta 1 (%s) venceu", cidade);
    }
    else if(densidade_populacional>densidade_populacional2){
        printf("A carta 2 (%s) venceu", cidade2);
    }
    else{
        printf("Empate!!!");
    }
        break;
    
    default:
    printf("Opção invalida");
        break;
    }
    break;

case 2:
    printf("regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor\n");
    break;

case 3:
    printf("Saindo...");
    break;

default:
printf("Opção invalida");
    break;
}
    

return 0;
}
