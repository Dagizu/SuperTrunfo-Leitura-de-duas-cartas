#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
//Teste Erik.

int main() {

    int populacao, NpontosTuristicos;
    float area, pib;
    char nome[10];
    char codigocarta[4];
    char estado;

    //primeira carta.

    int populacao2, NpontosTuristicos2;
    float area2, pib2;
    char nome2[10];
    char codigocarta2[4];
    char estado2;

    //Segunda carta.

    //Aqui fiz as variáveis que serão utilizadas.
    
    printf("Será necessário que insire as informações para a primeira carta\n");
    
    printf("Estado: \n");
    scanf(" %c", &estado);

    printf("Nome da cidade: \n");
    scanf("%s", nome);

    printf("Código da carta: \n");
    scanf("%s", codigocarta);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Número de Pontos turísticos: \n");
    scanf("%d", &NpontosTuristicos);

    printf("Área: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    //Separei os printfs e scanfs para cada carta.

    printf("Agora insire as informações para a segunda carta\n");

    printf("Estado: \n");
    scanf(" %c", &estado2);

    printf("Nome da cidade: \n");
    scanf("%s", nome2);

    printf("Código da carta: \n");
    scanf("%s", codigocarta2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Número de Pontos turísticos: \n");
    scanf("%d", &NpontosTuristicos2);

    printf("Área: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Primeira carta: \n");
    
    printf("Estado: %c\n", estado);
    printf("Nome: %s\n", nome);
    printf("Código da carta: %s\n", codigocarta);
    printf("População: %d\n", populacao);
    printf("Número de pontos turísticos: %d\n", NpontosTuristicos);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);

    //Primeira leitura dos dados para a primeira carta.

    printf("Segunda carta: \n");
    
    printf("Estado: %c\n", estado2);
    printf("Nome: %s\n", nome2);
    printf("Código da carta: %s\n", codigocarta2);
    printf("População: %d\n", populacao2);
    printf("Número de pontos turísticos: %d\n", NpontosTuristicos2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    
    //Segunda leitura dos dados para a primeira carta.

    return 0;
}

