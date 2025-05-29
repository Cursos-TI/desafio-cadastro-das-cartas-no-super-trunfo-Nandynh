#include <stdio.h>
int main(){
    // variaveis das duas cartas
    char Estado, Estado2;
    char codigoCarta[3], codigoCarta2[3];
    char cidade[30], cidade2[30];
    int populacao, populacao2 ;
    float pib, pib2, area, area2;
    int numPontoTuristico, numPontoTuristico2 ;
    float densidade, densidade2, pibCapita, pibCapita2;

    //entrada e saida de dados da carta 1 com printf e scanf
    printf ("\nCarta 1\n");
    printf ("Digite a letra representando o Estado(A ate H): ");
    scanf(" %c", &Estado);
    printf ("Digite o codigo da carta: ");
    scanf("%s", &codigoCarta);
    printf ("Digite o nome da cidade: ");
    scanf("%s", &cidade);
    printf ("Digite o numero de habitantes dessa cidade: ");
    scanf("%d", &populacao);
    printf ("Digite a area em km² dessa cidade: ");
    scanf("%f", &area);
    printf ("Digite o PIB dessa cidade: ");
    scanf("%f", &pib);
    printf ("Digite o numero de pontos turisticos dessa cidade: ");
    scanf("%d", &numPontoTuristico);

    //entrada e saida de dados da carta 2 com printf e scanf
    printf ("\nCarta 2\n");
    printf ("Digite a letra representando o Estado(A ate H): ");
    scanf(" %c", &Estado2);
    printf ("Digite o codigo da carta: ");
    scanf("%s", &codigoCarta2);
    printf ("Digite o nome da cidade: ");
    scanf("%s", &cidade2);
    printf ("Digite o numero de habitantes dessa cidade: ");
    scanf("%d", &populacao2);
    printf ("Digite a area em km² dessa cidade: ");
    scanf("%f", &area2);
    printf ("Digite o PIB dessa cidade: ");
    scanf("%f", &pib2);
    printf ("Digite o numero de pontos turisticos dessa cidade: ");
    scanf("%d", &numPontoTuristico2);

    //calculo 1 e 2 da densidade
    densidade = (populacao / area);
    densidade2 = (populacao2 / area2);

    //calculo 1 e 2 do PIB per Capita
    pibCapita = (pib / populacao);
    pibCapita2 = (pib2 / populacao2);

    //impressão da carta 1
    printf ("Carta 1\n");
    printf ("Estado: %c\n", Estado);
    printf ("Codigo: %s\n", codigoCarta);
    printf ("Nome da Cidade: %s\n", cidade);
    printf ("Populacao: %d\n", populacao);
    printf ("Area: %2.f km²\n", area);
    printf ("PIB: %2.f bilhoes de reais\n", pib);
    printf ("Numero de Pontos Turisticos: %d\n", numPontoTuristico);
    printf ("Densidade populacional: %2.f hab/km²\n", densidade);
    printf ("PIB per Capita: %2.f reais\n", pibCapita);



    //impressão da carta 2
    printf ("Carta 2\n");
    printf ("Estado: %c\n", Estado2);
    printf ("Codigo: %s\n", codigoCarta2);
    printf ("Nome da Cidade: %s\n", cidade2);
    printf ("Populacao: %d\n", populacao2);
    printf ("Area: %2.f km²\n", area2);
    printf ("PIB: %2.f bilhoes de reais\n", pib2);
    printf ("Numero de Pontos Turisticos: %d\n", numPontoTuristico2);
    printf ("Densidade populacional: %2.f hab/km²\n", densidade2);
    printf ("PIB per Capita: %2.f reais\n", pibCapita2);

    //fim do programa
    return 0;

}
