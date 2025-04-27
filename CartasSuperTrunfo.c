#include <stdio.h>
typedef struct
{
    char estado;                // Uma letra de 'A' a 'H' (representando um dos oito estados)
    char codigoCarta[4];        // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    char nomeCidade[30];        // O nome da cidade
    int populacao;              // O número de habitantes da cidade
    float area;                 // A área da cidade em quilômetros quadrados
    float pib;                  // O Produto Interno Bruto da cidade
    int numeroPontosTuristicos; // A quantidade de pontos turísticos na cidade
    float densidadeDemografica; // A densidade demográfica da cidade (população/área)
    float pibPerCapita;        // O PIB per capita da cidade (PIB/população)
    int somaAtributoscarta1;
    int somaAtributoscarta2;
} Carta;

int main()
{
    // inicializando variáveis
    Carta carta1, carta2;

    // cadastro da primeira carta

    printf("Cadrastre a primeira carta:\n");
    printf("Digite o estado (A a H): ");
    scanf(" %c", &carta1.estado); // Lê o estado
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", carta1.codigoCarta); // Lê o código da carta
    getchar();                        
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade); // Lê o nome da cidade (incluindo espaços)
    printf("Digite a população da cidade: ");
    scanf("%d", &carta1.populacao); // Lê a população da cidade
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &carta1.area); // Lê a área da cidade
    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta1.pib); // Lê o PIB da cidade
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.numeroPontosTuristicos); // Lê o número de pontos turísticos

    carta1.densidadeDemografica = carta1.populacao / carta1.area; // Calcula a densidade demográfica
    carta1.pibPerCapita = carta1.pib / carta1.populacao;          // Exibindo os dados cadastrados
    
    float somaAtributoscarta1 = (float)carta1.populacao + carta1.area + carta1.pib + (float)carta1.numeroPontosTuristicos + 1 / carta1.densidadeDemografica + carta1.pibPerCapita;

 
    printf("Exibindo dados da carta 1: \n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código da carta: %s\n", carta1.codigoCarta);
    printf("Nome da cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Número de pontos turísticos: %d\n", carta1.numeroPontosTuristicos);
    printf("Densidade demográfica: %.2f habitantes/km²\n", carta1.densidadeDemografica);
    printf("PIB per capita: %.2f\n", carta1.pibPerCapita);
    printf("Soma dos atributos: %.2f\n", somaAtributoscarta1);
   

    // cadastro de cidade 2
    printf("\n");
    printf("Cadatre a carta2:\n");
    printf("\n");

    printf("Digite o estado (A a H): ");
    scanf(" %c", &carta2.estado); // Lê o estado
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", carta2.codigoCarta); // Lê o código da carta
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade); // Lê o nome da cidade (incluindo espaços)
    printf("Digite a população da cidade: ");
    scanf("%d", &carta2.populacao); // Lê a população da cidade
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &carta2.area); // Lê a área da cidade
    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta2.pib); // Lê o PIB da cidade
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.numeroPontosTuristicos); // Lê o número de pontos turísticos

    carta2.densidadeDemografica = carta2.populacao / carta2.area; // Calcula a densidade demográfica
    carta2.pibPerCapita = carta2.pib / carta2.populacao;          // Exibindo os dados cadastrados

    int somaAtributoscarta2 = carta2.populacao + carta2.area + carta2.pib + carta2.numeroPontosTuristicos + carta2.densidadeDemografica + carta2.pibPerCapita;
    
    printf("Exibindo dados da carta 2: \n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código da carta: %s\n", carta2.codigoCarta);
    printf("Nome da cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Número de pontos turísticos: %d\n", carta2.numeroPontosTuristicos);
    printf("Densidade demográfica: %.2f habitantes/km²\n", carta2.densidadeDemografica);
    printf("PIB per capita: %.2f\n", carta2.pibPerCapita);
    printf("Soma dos atributos: %.2f\n", somaAtributoscarta2);

    

    printf("\n");

    // Comparação de cartas

    
    if ( carta1.populacao > carta2.populacao )
    {
        printf("População: Carta 1 venceu (1)\n");
    }
    else if ( carta1.populacao < carta2.populacao )
    {
        printf("População: Carta 2 venceu (0)\n");
    }
    else
    {
        printf("População: Cartas empataram!\n");
    }

    if ( carta1.area > carta2.area )
    {
        printf("Área: Carta 1 venceu (1)\n");
    }
    else if ( carta1.area < carta2.area )
    {
        printf("Área: Carta 2 venceu (0)\n");
    }
    else
    {
        printf("Área: Cartas empataram!\n");
    }

    if ( carta1.pib > carta2.pib )
    {
        printf("PIB: Carta 1 venceu (1)\n");
    }
    else if ( carta1.pib < carta2.pib )
    {
        printf("PIB: Carta 2 venceu (0)\n");
    }
    else
    {
        printf("PIB: Cartas empataram!\n");
    }

    if ( carta1.numeroPontosTuristicos > carta2.numeroPontosTuristicos )
    {
        printf("Pontos Turísticos: Carta 1 venceu (1)\n");
    }
    else if ( carta1.numeroPontosTuristicos < carta2.numeroPontosTuristicos )
    {
        printf("Pontos Turísticos: Carta 2 venceu (0)\n");
    }
    else
    {
        printf("Pontos Turísticos: Cartas empataram!\n");
    }

    if ( carta1.densidadeDemografica < carta2.densidadeDemografica )
    {
        printf("Densidade Demográfica: Carta 1 venceu (1)\n");
    }
    else if ( carta1.densidadeDemografica > carta2.densidadeDemografica )
    {
        printf("Densidade Demográfica: Carta 2 venceu (0)\n");
    }
    else
    {
        printf("Densidade Populacional: Cartas empataram!\n");
    }

    if ( carta1.pibPerCapita > carta2.pibPerCapita )
    {
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    }
    else if ( carta1.pibPerCapita < carta2.pibPerCapita )
    {
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    }
    else
    {
        printf("PIB per Capta: Cartas empataram!\n");
    }
    
    if (somaAtributoscarta1 > somaAtributoscarta2)
    {
        printf("Super Poder: Carta 1 venceu (1) \n");
    }
    else if (somaAtributoscarta1 < somaAtributoscarta2)
    {
        printf("Super Poder: Carta 2 venceu (0) \n");
    }
    else
    {
        printf("Super Poder: Cartas empataram!\n");
    }
    printf("fim de jogo.");
     
    }
    // Fim do código    