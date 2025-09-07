carta2
	#include <stdio.h>

int main(){
	
	char estado[30] = "B";
	char codigo[30] = "B02";
	char cidade[30] = "RiodeJaneiro";
	int populacao = 6748000;
	float area = 1200.25 ;
	float pib = 300.50;
	int turistico = 30;
	
		
	printf("estado: %s \n", estado);
	
	printf("codigo: %s \n",codigo);
	
	printf("cidade: %s \n",cidade);
	
	printf("populacao: %d \n",populacao);
		
	printf("area: %.2f \n",area);
	
	printf("PIB: %.2f\n",pib);
	
	printf("turistico: %d \n", turistico);
	
	  
	
	printf("seu codigo: %s - estado: %s - cidade: %s - populacao: %d - area habitada: %.2f km  -  Valor PIB da cidade: %.2f milhoes - Area turistica: %d" , codigo, estado, cidade, populacao, area, pib, turistico);
	
	
	

	
	return 0;
	
}