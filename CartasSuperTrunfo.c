	#include <stdio.h>

int main(){
	
	char estado[30];
	char codigo[30];
	char cidade[30];
	int populacao;
	float area;
	float pib;
	int pontosturistico;
	float DensidadePopulacional;
	float PIBperCapita;
	
	printf("digite o estado \n");
	scanf("%s", &estado);
	
	printf("digite codigo da cidade \n");
	scanf("%s", &codigo); 
	
	printf("Digite a Cidade \n");
	scanf("%s", &cidade);
	
	printf("Digite a quantidade de popoulacao \n");
	scanf("%d", &populacao);
	
	printf("Digite Area Habitada \n");
	scanf("%f", &area);

	printf("Digite PIB da Cidade \n");
	scanf("%f", &pib);
	
	printf("PIBperCapita: \n", pib / populacao);
	
	printf("Digite quantidade de pontos turistico \n");
	scanf("%d", &pontosturistico);
	
	
	


	printf("Estado: %s - Codigo: %s - Cidade: %s - Populacao: %d - Area Habitada: %.2f km - PIB da Cidade: %.2f bilhoes - Pontos Turistico: %d", estado, codigo, cidade, populacao, area, DensidadePopulacional, pib, pontosturistico);	

	return 0;
	
}