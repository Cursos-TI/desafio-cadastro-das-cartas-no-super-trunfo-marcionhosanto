#include <stdio.h>
int main() {
    int populacao;
    float area;
    float pib;
    int turisticos;

    	printf(" digite quantidade populacao \n");
	    scanf("%d", &populacao);

        printf(" digite area habitada \n");
	    scanf("%f", &area);

        printf("digite PIB da cidade \n");
	    scanf("%f", &pib);

        printf("digite Area turisticos \n");
	    scanf("%d", &turisticos);

        printf("populacao: %d - area: %f - pib: %f - turistico %d", populacao, area, pib, turisticos);


    return 0;
}
