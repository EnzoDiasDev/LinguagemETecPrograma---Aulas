#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float Largura, Altura, Comprimento, Volume;
	
	printf("Digite a largura do ret�ngulo: ");
	scanf("%f", &Largura);
	printf("Digite a altura do ret�ngulo: ");
	scanf("%f", &Altura);
	printf("Digite a altura do ret�ngulo: ");
	scanf("%f", &Comprimento);
	
	Volume = Comprimento * Largura * Altura;
	printf("O volume do ret�ngulo � %.4f", Volume);
}
