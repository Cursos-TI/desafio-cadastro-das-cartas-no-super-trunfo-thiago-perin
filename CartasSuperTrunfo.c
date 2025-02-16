#include <stdio.h>

// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int pontos, populacao;
    float pib, area;
    char nome[3];

		// nome do aplicativo
    	printf("Desafio Super Trunfo - Países \n");
    
        // Cadastrando uma cidade
		printf("Digite o seu nome da cidade combinando uma letra (A...H) e um número(01...04): \n");
		scanf("%s", &nome);

 	   // Colocando o valor da população
		printf("Digite o tamanho da população da cidade: \n");
		scanf("%d", &populacao);

   	 // Colocando a área da cidade
		printf("Digite o valor da área da cidade em quilômetros quadrados: \n");
		scanf("%f", &area);
    	
 	   // Colocando o pib da cidade
  	  printf("Digite o pib da cidade: \n");
		scanf("%f", &pib);
    
     	   // Colocando o pib da cidade
  	  printf("Digite quantos pontos turisticos tem na cidade: \n");
		scanf("%d", &pontos);
		
    printf("Cidade cadastrada: \n");
	printf("Nome da cidade: %s \n", nome);
	printf("População da cidade: %d \n", populacao);
	printf("Area da cidade: %.2f Kmˆ2 \n", area);
	printf("PIB da cidade: %.2f \n", pib);
	printf("Quantidade de pontos turisticos: %d \n", pontos);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
