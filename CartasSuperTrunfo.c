	#include <stdio.h>

int main(){
	
	char estado[30] = "A";
	char codigo[30] = "A01";
	char cidade[30] = "Saopaulo";
	int populacao = 12325000;
	float area = 1521.11;
	float pib = 699.28;
	int turistico = 50;
	
		
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
