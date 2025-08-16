#include <stdio.h>
int main() {
    
    char codigo[30];
    char estado[30];
    int populacao;
    float area;
    float pib;
    int turisticos;

    	printf("digite codigo: \n");
	    scanf("%s", codigo); 

        printf("digite seu estado: \n");
	    scanf("%s", estado);

    	printf(" digite quantidade populacao \n");
	    scanf("%d", &populacao);

        printf(" digite area habitada \n");
	    scanf("%f", &area);

        printf("digite PIB da cidade \n");
	    scanf("%f", &pib);

        printf("digite Area turisticos \n");
	    scanf("%d", &turisticos);

        printf("codigo %s - estado: %s - populacao: %d - area: %fKm - pib: %fmilhoes - turistico %d", codigo, estado, populacao, area, pib, turisticos);

        return 0;
        
}
