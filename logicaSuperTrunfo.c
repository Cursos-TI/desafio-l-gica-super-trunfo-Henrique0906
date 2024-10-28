#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
	char codigo_estado1[1], codigo_estado2[1], codigo_carta1[3], codigo_carta2[3], nome_cidade1[20], nome_cidade2[20], cidade_vencedora;
	int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // inserção de dados da primeira cidade
    printf("CADASTRO DA CARTA 1\n");
 	printf("Entre A e H, digite o codigo do primeiro Estado: ");
    scanf("%s", &codigo_estado1);

    printf("Digite o codigo da carta(ex:X01): ");
    scanf("%s", &codigo_carta1);

    printf("Digite o nome da primeira cidade: ");
    scanf("%s", &nome_cidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area: ");
    scanf("%f", &area1);

    printf("Digite a PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

	 // inserção de dados da segunda cidade
	printf("\nCADASTRO DA CARTA 2"); 
	printf("\nEntre A e H, digite o codigo do segundo Estado: ");
    scanf("%s", &codigo_estado2);

    printf("Digite o codigo da carta(ex:X01): ");
    scanf("%s", &codigo_carta2);

    printf("Digite o nome da segunda cidade: ");
    scanf("%s", &nome_cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);

    printf("Digite a PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);
	 
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    		
    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
	
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    
	if(populacao1==populacao2) {
	printf("\n%s e %s tem a mesma populacao \n", nome_cidade1, nome_cidade2);
		}else
			if(populacao1>populacao2){
			printf("\n%s tem maior populacao com %d habitantes \n", nome_cidade1, populacao1);
		} 		else {
				printf("\n%s tem maior populacao com %d habitantes \n", populacao2, nome_cidade2);
	}
	if(area1==area2){
	printf("%s e %s tem a mesma area de %.2f km quadrados \n", nome_cidade1, nome_cidade2, area1);
		}else
			if(area1>area2) {
			printf("%s tem maior area com %.2f km quadrados \n", nome_cidade1, area1);
		} 		else {
				printf("%s tem maior area com %.2f km quadrados \n", nome_cidade2, area2);
	}
	if(pib1==pib2){
	printf("%s e %s tem o mesmo PIB com R$%.2f \n", nome_cidade1, nome_cidade2, pib1);
		}else
			if(pib1>pib2) {
			printf("%s tem maior PIB com R$%.2f \n", nome_cidade1, pib1);
		} 		else {
				printf("%s tem maior PIB com R$%.2f \n", nome_cidade2, pib2);
	}
	if(pontos_turisticos1==pontos_turisticos2){
	printf("%s e %s tem a mesma quantidade de pontos turisticos \n", nome_cidade1, nome_cidade2);
		}else
			if(pontos_turisticos1>pontos_turisticos2) {
			printf("%s tem mais pontos turisticos com %d \n", nome_cidade1, pontos_turisticos1);
		} 		else {
				printf("%s tem mais pontos turisticos com %d \n", nome_cidade2, pontos_turisticos2);
	}

    return 0;
}