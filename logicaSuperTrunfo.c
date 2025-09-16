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
    double PIB= 30835763.45 ;
    unsigned pontos_turisticos=10;

    // segunda carta
    char estado2[15]="Pará";
    char carta2[10]="PA02";
    char cidade2[20]="Paragominas";
    unsigned int habitantes2=105538;
    double area2=19342.254;
    double PIB2=3777292.01;
    unsigned pontos_turisticos2=5;

    // Calculo Desidade e PIB/CAP
    float densidade_populacional = habitantes / area;
    float pib_per_capita = PIB / habitantes;
    float densidade_populacional2 = habitantes2 / area2;
    float pib_per_capita2 = PIB2 / habitantes2;

    int resultadoC1=0;
    int resultadoC2=0;
    double resultado1;
    double resultado2;
    const char *atributo1;
    const char *atributo2;

    double num1;
    double num2;
    double num3;
    double num4;


    int menu1;
    int menu2;
    int menu3;
    printf("Bem-Vindo ao jogo Super Trunfo");
    printf("Escolha uma das opções\n");
    printf("1 - Iniciar o jogo\n");
    printf("2 - Regras do jogo\n");
    printf("3 - Sair\n\n");
    scanf("%d", &menu1);

switch (menu1)
{
case 1:
printf("Escolha o primeiro atributo de comparação\n");
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
    atributo1 ="População";

        if (habitantes>habitantes2)
        {
            num1 = habitantes;
            num2 = habitantes2;
            resultadoC1= ++resultadoC1;
            printf("A carta 1 (%s) venceu\n\n", cidade);
            
        } else {
            num1 = habitantes2;
            num2 = habitantes;
            resultadoC2= ++resultadoC2;
            printf("A carta 2 (%s) venceu\n\n", cidade2);
        }
        break;

    case 2:
        // Comparação das Cartas
    printf("Comparação entre as cartas\n");
    printf("Atributo utilizado: Área\n");
    printf("Carta 1: %s (%s): %.2f km²\n",cidade, carta, area);
    printf("Carta 2: %s (%s): %.2f km²\n",cidade2, carta2, area2);
        atributo1="Área";
     if (area > area2)
        {
            num1 = area;
            num2 = area2;
            resultadoC1= ++resultadoC1;
            printf("A carta 1 (%s) venceu\n\n", cidade);
        } else {
            num1 = area2;
            num2 = area;
            resultadoC2= ++resultadoC2;
            printf("A carta 2 (%s) venceu\n\n", cidade2);
        }
        break;
    
    case 3:
            // Comparação das Cartas
    printf("Comparação entre as cartas\n");
    printf("Atributo utilizado: PIB\n");
    printf("Carta 1: %s (%s): %.2f mil\n",cidade, carta, PIB);
    printf("Carta 2: %s (%s): %.2f mil\n",cidade2, carta2, PIB2);
    atributo1="PIB";

     if (PIB > PIB2)
        {
            num1 = PIB;
            num2 = PIB2;
            resultadoC1 = ++resultadoC1;
            printf("A carta 1 (%s) venceu\n\n", cidade);
        } else {
            num1 = PIB2;
            num2 = PIB;
            resultadoC2 = ++resultadoC2;
            printf("A carta 2 (%s) venceu\n\n", cidade2);
        }
        break;

    case 4:
            // Comparação das Cartas
    printf("Comparação entre as cartas\n");
    printf("Atributo utilizado: Pontos Turísticos\n");
    printf("Carta 1: %s (%s): %d\n",cidade, carta, pontos_turisticos);
    printf("Carta 2: %s (%s): %d\n",cidade2, carta2, pontos_turisticos2);
    atributo1="Pontos Turísticos";

     if (pontos_turisticos > pontos_turisticos2)
        {
            num1 = pontos_turisticos;
            num2 = pontos_turisticos2;
            resultadoC1 = ++resultadoC1;
            printf("A carta 1 (%s) venceu\n\n", cidade);
        } else {
            num1 = pontos_turisticos2;
            num2 = pontos_turisticos;
            resultadoC2 = ++resultadoC2;
            printf("A carta 2 (%s) venceu\n\n", cidade2);
        }
        break;

    case 5:
            // Comparação das Cartas
    printf("Comparação entre as cartas\n");
    printf("Atributo utilizado: Densidade Demográfica\n");
    printf("Carta 1: %s (%s): %.2f\n",cidade, carta, densidade_populacional);
    printf("Carta 2: %s (%s): %.2f\n",cidade2, carta2, densidade_populacional2);
    atributo1="Densidade Demográfica";

    if (densidade_populacional < densidade_populacional2)
        {
            num1 = densidade_populacional;
            num2 = densidade_populacional2;
            resultadoC1 = ++resultadoC1;
            printf("A carta 1 (%s) venceu\n\n", cidade);
        } else {
            num1 = densidade_populacional2;
            num2 = densidade_populacional;
            resultadoC2 = ++resultadoC2;
            printf("A carta 2 (%s) venceu\n\n", cidade2);
        }
        break;
    
    default:
    printf("Opção invalida\n\n");
        break;
    }

printf("Escolha o segundo atributo de comparação\n");
printf("1 - População\n");
printf("2 - Área\n");
printf("3 - PIB\n");
printf("4 - Pontos Turísticos\n");
printf("5 - Densidade Demográfica\n");
scanf("%d", &menu3);

if (menu3==menu2)
{
     printf("Você escolheu a mesma opção, escolha outra e tente novamente\n\n");
} else {
        switch (menu3)
    {
    case 1:
    // Comparação das Cartas
    printf("Comparação entre as cartas\n");
    printf("Atributo utilizado: População\n");
    printf("Carta 1: %s (%s): %d de habitantes\n",cidade, carta, habitantes);
    printf("Carta 2: %s (%s): %d de habitantes\n",cidade2, carta2, habitantes2);
    atributo2="População";

    if (habitantes>habitantes2)
        {
            num3 = habitantes;
            num4 = habitantes2;
            resultadoC1= ++resultadoC1;
            printf("A carta 1 (%s) venceu\n\n", cidade);
            
        } else {
            num3 = habitantes2;
            num4 = habitantes;
            resultadoC2= ++resultadoC2;
            printf("A carta 2 (%s) venceu\n\n", cidade2);
        }
    break;

    case 2:
        // Comparação das Cartas
    printf("Comparação entre as cartas\n");
    printf("Atributo utilizado: Área\n");
    printf("Carta 1: %s (%s): %.2f km²\n",cidade, carta, area);
    printf("Carta 2: %s (%s): %.2f km²\n",cidade2, carta2, area2);
    atributo2="Área";

     if (area > area2)
        {
            num3 = area;
            num4 = area2;
            resultadoC1= ++resultadoC1;
            printf("A carta 1 (%s) venceu\n\n", cidade);
        } else {
            num3 = area2;
            num4 = area;
            resultadoC2= ++resultadoC2;
            printf("A carta 2 (%s) venceu\n\n", cidade2);
        }
        break;
    
    case 3:
            // Comparação das Cartas
    printf("Comparação entre as cartas\n");
    printf("Atributo utilizado: PIB\n");
    printf("Carta 1: %s (%s): %.2f mil\n",cidade, carta, PIB);
    printf("Carta 2: %s (%s): %.2f mil\n",cidade2, carta2, PIB2);
    atributo2="PIB";

     if (PIB > PIB2)
        {
            num3 = PIB;
            num4 = PIB2;
            resultadoC1 = ++resultadoC1;
            printf("A carta 1 (%s) venceu\n\n", cidade);
        } else {
            num3 = PIB2;
            num4 = PIB;
            resultadoC2 = ++resultadoC2;
            printf("A carta 2 (%s) venceu\n\n", cidade2);
        }
        break;

    case 4:
            // Comparação das Cartas
    printf("Comparação entre as cartas\n");
    printf("Atributo utilizado: Pontos Turísticos\n");
    printf("Carta 1: %s (%s): %d\n",cidade, carta, pontos_turisticos);
    printf("Carta 2: %s (%s): %d\n",cidade2, carta2, pontos_turisticos2);
    atributo2="Pontos Turísticos";

     if (pontos_turisticos > pontos_turisticos2)
        {
            num3 = pontos_turisticos;
            num4 = pontos_turisticos2;
            resultadoC1 = ++resultadoC1;
            printf("A carta 1 (%s) venceu\n\n", cidade);
        } else {
            num3 = pontos_turisticos2;
            num4 = pontos_turisticos;
            resultadoC2 = ++resultadoC2;
            printf("A carta 2 (%s) venceu\n\n", cidade2);
        }
        break;

    case 5:
            // Comparação das Cartas
    printf("Comparação entre as cartas\n");
    printf("Atributo utilizado: Densidade Demográfica\n");
    printf("Carta 1: %s (%s): %.2f\n",cidade, carta, densidade_populacional);
    printf("Carta 2: %s (%s): %.2f\n",cidade2, carta2, densidade_populacional2);
    atributo2="Densidade Demográfica";

    if (densidade_populacional < densidade_populacional2)
        {
            num3 = densidade_populacional2;
            num4 = densidade_populacional;
            resultadoC1 = ++resultadoC1;
            printf("A carta 1 (%s) venceu\n\n", cidade);
        } else {
            num3 = densidade_populacional2;
            num4 = densidade_populacional;
            resultadoC2 = ++resultadoC2;
            printf("A carta 2 (%s) venceu\n\n", cidade2);
        } 
    
        break;

    default:
    printf("Opção invalida\n\n");
        break;
    }
        }

    double soma = num1+num3;
    double soma2 = num2+num4;

    if (soma>soma2)
    {
        resultadoC1 = ++resultadoC1;
    } else {
        resultadoC2 = ++resultadoC2;
    }
    

    printf("Resultado:\n");
    printf("Carta 1: %s (%s)\n",cidade, carta);
    printf("Carta 2: %s (%s)\n",cidade2, carta2);
    printf("Atributos utilizados: %s e %s\n", atributo1, atributo2);
    printf("Valores carta 1: %s %.2f e %s: %.2f, Valores Carta 2: %s %.2f e %s: %.2f\n", atributo1,num1, atributo2, num3, atributo1,num2, atributo2, num4);
    printf("Soma dos atributos: %s+%s carta 1= %.2f e %s+%s carta 2=%.2f\n", atributo1,atributo2, soma, atributo1, atributo2, soma2);


    if (resultadoC1==resultadoC2)
    {
        printf("Empate!!");
    } else if (resultadoC1>resultadoC2) 
    {
        printf("A carta 1 %s (%s) venceu!",cidade, carta);

    } else {
        printf("A carta 2 %s (%s) venceu!",cidade2, carta2);
    }
    
    break;

case 2:
    printf("regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor\n\n");
    break;

case 3:
    printf("Saindo...\n\n");
    break;

default:
printf("Opção invalida\n\n");
    break;
}
    

return 0;
}
