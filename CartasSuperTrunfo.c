#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Variaveis
    char codigo_cidade[50], nome[50];
    int populacao, pib, num_pontos_turisticos;
    float area;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Coleta de dados
    printf("Codigo da Cidade: ");
    scanf("%s", &codigo_cidade);
    printf("Codigo da Cidade: ");
    scanf("%s", &nome);
    printf("Codigo da Cidade: ");
    scanf("%d", &populacao);
    printf("Codigo da Cidade: ");
    scanf("%f", &area);
    printf("Codigo da Cidade: ");
    scanf("%d", &pib);
    printf("Codigo da Cidade: ");
    scanf("%d", &num_pontos_turisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Exibindo dados
    printf("Codigo da Cidade: %");
    printf("Nome: ");
    printf("População: ");
    printf("Área: ");
    printf("PIB: ");
    printf("Número de pontos turísticos: ");

    return 0;
}
