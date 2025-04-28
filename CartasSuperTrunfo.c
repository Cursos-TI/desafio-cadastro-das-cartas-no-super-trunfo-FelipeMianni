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
    float pibPerCapita;         // O PIB per capita da cidade (PIB/população)
    float somaAtributosCarta;
    float atributoSelecionado1;
    float atributoSelecionado2; // Atributos selecionados para comparação
} Carta;


Carta cadastrarCarta(Carta carta)
{
    
    printf("Cadastrando carta...\n");
    // cadastro da primeira carta

    printf("Cadrastre a primeira carta:\n");
    printf("Digite o estado (A a H): ");
    scanf(" %c", &carta.estado); // Lê o estado
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", carta.codigoCarta); // Lê o código da carta
    getchar();
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta.nomeCidade); // Lê o nome da cidade (incluindo espaços)
    printf("Digite a população da cidade: ");
    scanf("%d", &carta.populacao); // Lê a população da cidade
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &carta.area); // Lê a área da cidade
    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta.pib); // Lê o PIB da cidade
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta.numeroPontosTuristicos); // Lê o número de pontos turísticos

    carta.densidadeDemografica = carta.populacao / carta.area; // Calcula a densidade demográfica
    carta.pibPerCapita = carta.pib / carta.populacao;          // Exibindo os dados cadastrados

    carta.somaAtributosCarta = (float)carta.populacao + carta.area + carta.pib + (float)carta.numeroPontosTuristicos + 1 / carta.densidadeDemografica + carta.pibPerCapita;

    printf("Exibindo dados da carta 1: \n");
    printf("Estado: %c\n", carta.estado);
    printf("Código da carta: %s\n", carta.codigoCarta);
    printf("Nome da cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f\n", carta.pib);
    printf("Número de pontos turísticos: %d\n", carta.numeroPontosTuristicos);
    printf("Densidade demográfica: %.2f habitantes/km²\n", carta.densidadeDemografica);
    printf("PIB per capita: %.2f\n", carta.pibPerCapita);
    printf("Soma dos atributos: %.2f\n", carta.somaAtributosCarta);

    return carta; // Retorna a carta cadastrada
    // Aqui você pode adicionar a lógica para cadastrar uma nova carta, como solicitar os dados do usuário e armazená-los.
} // Função para cadastrar uma nova carta

int menuEscolhaAtributo()

{
    int opcao;
    printf("Escolha um atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("6. PIB per capita\n");
    printf("7. Soma dos atributos\n");
    scanf("%d", &opcao);
    
    if (opcao < 1 || opcao > 7)
    {
        printf("Opção inválida. Tente novamente.\n");
        return menuEscolhaAtributo(); // Chama a função novamente para obter uma opção válida
    }
    
    return opcao; // Retorna a opção escolhida pelo usuário
} // Função para exibir o menu de escolha de atributos

float buscarAtributo(int opcao,Carta carta) {
switch (opcao) 
{
case 1:
    return (float)carta.populacao;
    break;
case 2:
    return (float)carta.area;
case 3:
    return (float)carta.pib;
case 4:
    return (float)carta.numeroPontosTuristicos;            
case 5:
    return (float)carta.densidadeDemografica;
case 6:
    return (float)carta.pibPerCapita;
case 7:
    return (float)carta.somaAtributosCarta;
default:
    break;
}


}

char* buscarNomeAtributo(int opcao) {

    switch (opcao) 
    {
    case 1:
        return "populacao";
        break;
    case 2:
        return "area";
    case 3:
        return "pib";
    case 4:
        return "numeroPontosTuristicos";            
    case 5:
        return "densidadeDemografica";
    case 6:
        return "pibPerCapita";
    case 7:
        return "somaAtributosCarta";
    default:
        break;
    }

}

int compararAtributos(float atributoCidade1, float atributoCidade2) {

    if (atributoCidade1 == atributoCidade2) {
        return -1; // Empate
    }
    

}

void iniciarJogo()
{
    // Cadastrando Cartas
    Carta carta1, carta2;
    carta1 = cadastrarCarta(carta1); // Chama a função para cadastrar a primeira carta
    carta2 = cadastrarCarta(carta2); // Chama a função para cadastrar a segunda carta
 
    // Escolhendo Atributos
    int atributo1, atrubuto2;
    printf("Escolha o primeiro atributo a ser comparado.");
    atributo1 = menuEscolhaAtributo();
    printf("Escolha o se gundo atrubuto a ser comparado ");
    atrubuto2 = menuEscolhaAtributo();

carta1.atributoSelecionado1 = buscarAtributo(atributo1, carta1);
carta1.atributoSelecionado2 = buscarAtributo(atrubuto2, carta1);
carta2.atributoSelecionado1 = buscarAtributo(atributo1, carta2);
carta2.atributoSelecionado2 = buscarAtributo(atrubuto2, carta2);

float somaAtributosCarta1 = carta1.atributoSelecionado1 + carta1.atributoSelecionado2;
float somaAtributosCarta2 = carta2.atributoSelecionado1 + carta2.atributoSelecionado2;

char* nomeAtributo1 = buscarNomeAtributo(atributo1);
char* nomeAtributo2 = buscarNomeAtributo(atrubuto2);

int comparacao1 = compararAtributos(carta1.atributoSelecionado1, carta2.atributoSelecionado1);
int comparacao2 = compararAtributos(carta1.atributoSelecionado2, carta2.atributoSelecionado2);
int comparacaoSoma = compararAtributos(somaAtributosCarta1, somaAtributosCarta2);

    printf("fim de jogo.");

} // Função para iniciar o jogo


void exibirRegras()
{
    printf("Regras do jogo:\n");
    printf("O jogador escolhe duas cartas.\n");
    printf("O jogador escolhe dois atributos para serem comparados.\n");
    printf("3. Vence a carta com maior soma dos atributos comparados.\n");
} // Função para exibir as regras do jogo


void sairJogo()
{
    printf("Saindo do jogo...\n");
    // Aqui você pode adicionar a lógica para encerrar o jogo, como liberar recursos ou salvar o estado do jogo.
} // Função para sair do jogo


int menu() // Função para exibir o menu e obter a opção do usuário
{
    int opcao;
    printf("Escolha uma opção\n");
    printf("1. Iniciar Jogo.\n");
    printf("2. Exibir Regras\n");
    printf("3. Sair\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Iniciando o jogo...\n");
        iniciarJogo(); // Chama a função para iniciar o jogo
        break;
    case 2:
        printf("Exibindo regras do jogo...\n");
        exibirRegras(); // Chama a função para exibir as regras do jogo
        break;
    case 3:
        printf("Saindo do jogo...\n");
        sairJogo(); // Chama a função para sair do jogo
        break;
    default:
        printf("Opção inválida. Tente novamente.\n");

        return menu(); // Chama a função novamente para obter uma opção válida
        break;
    }
}


void main()
{
     menu();

    printf("\n");  
}
