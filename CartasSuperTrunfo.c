#include <stdio.h>
typedef struct {
    char estado;                // Uma letra de 'A' a 'H' (representando um dos oito estados)
    char codigoCarta[4];        // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    char nomeCidade[30];        // O nome da cidade
    int populacao;              // O número de habitantes da cidade
    float area;                 // A área da cidade em quilômetros quadrados
    float pib;                  // O Produto Interno Bruto da cidade
    int numeroPontosTuristicos; // A quantidade de pontos turísticos na cidade
} Cidade;

int main()
{
    
    // inicializando variáveis
    Cidade cidade1, cidade2;     
    
    // cadastro de cidade 1

    printf("Cadrastre a cidade 1:\n");
    printf("\n");
    
    printf("Digite o estado (A a H): ");
    scanf(" %c", &cidade1.estado); // Lê o estado
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", cidade1.codigoCarta); // Lê o código da carta
    getchar(); // Limpa o buffer do teclado
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1.nomeCidade); // Lê o nome da cidade (incluindo espaços)
    printf("Digite a população da cidade: ");
    scanf("%d", &cidade1.populacao); // Lê a população da cidade
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &cidade1.area); // Lê a área da cidade
    printf("Digite o PIB da cidade: ");
    scanf("%f", &cidade1.pib); // Lê o PIB da cidade
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &cidade1.numeroPontosTuristicos); // Lê o número de pontos turísticos
    
    // Exibindo os dados cadastrados
    
    printf("\n");
    printf("\nDados cadastrados:\n");
    printf("\n");
    printf("Estado: %c\n", cidade1.estado);
    printf("Código da carta: %s\n", cidade1.codigoCarta);
    printf("Nome da cidade: %s\n", cidade1.nomeCidade);
    printf("População: %d\n", cidade1.populacao);
    printf("Área: %.2f km²\n", cidade1.area);
    printf("PIB: %.2f\n", cidade1.pib);
    printf("Número de pontos turísticos: %d\n", cidade1.numeroPontosTuristicos);
    
    // cadastro de cidade 2
    printf("\n");
    printf("Cadatre a cidade2:\n");
    printf("\n");
    
    printf("Digite o estado (A a H): ");
    scanf(" %c", &cidade2.estado); // Lê o estado
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", cidade2.codigoCarta); // Lê o código da carta
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2.nomeCidade); // Lê o nome da cidade (incluindo espaços)
    printf("Digite a população da cidade: ");
    scanf("%d", &cidade2.populacao); // Lê a população da cidade
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &cidade2.area); // Lê a área da cidade
    printf("Digite o PIB da cidade: ");
    scanf("%f", &cidade2.pib); // Lê o PIB da cidade
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &cidade2.numeroPontosTuristicos); // Lê o número de pontos turísticos
    
    // Exibindo os dados cadastrados
    
    printf("\n");
    printf("\nDados cadastrados:\n");
    printf("\n");
    printf("Estado: %c\n", cidade2.estado);
    printf("Código da carta: %s\n", cidade2.codigoCarta);
    printf("Nome da cidade: %s\n", cidade2.nomeCidade);
    printf("População: %d\n", cidade2.populacao);
    printf("Área: %.2f km²\n", cidade2.area);
    printf("PIB: %.2f\n", cidade2.pib);
    printf("Número de pontos turísticos: %d\n", cidade2.numeroPontosTuristicos);    
}
