#include <stdio.h>

int main(){
	
	char estado[30] = "saopaulo, ceara";
	char codigo[30] = "A01, A02";
	char cidade[30] = "carapicuiba, osasco";
	int populacao = "populacao1, populacao2";
	float area = "area1; area2";
	float pib = "pib1, pib2";
	int pontoturistico = "pontoturistico1, pontoturistico2";
	
	
	printf("digite o estado \n");
	scanf("%s", &saopaulo, &ceara);
	
	printf("digite codigo da cidade \n");
	scanf("%s", &A01, &A02; 
	
	printf("Digite a Cidade \n");
	scanf("%s", &carapicuiba, &osasco);
	
	printf("Digite a quantidade de popoulacao \n");
	scanf("%d", &populacao1, &populacao2);
	
	printf("Digite Area Habitada \n");
	scanf("%f", &area1, &area2);
	
	printf("Digite PIB da Cidade \n");
	scanf("%f", &pib1, &pib2);
	
	printf("Digite quantidade de pontos turistico \n");
	scanf("%d", &pontoturistico1, &pontoturistico2);
	
	printf("Estado: %s - Codigo: %s - Cidade: %s - Populacao: %d - Area Habitada: %.2f km - PIB da Cidade: %.2f bilhoes - Pontos Turistico: %d", estado, codigo, cidade, populacao, area, DensidadePopulacional, pib, pontosturistico);	

	return 0;
	
}