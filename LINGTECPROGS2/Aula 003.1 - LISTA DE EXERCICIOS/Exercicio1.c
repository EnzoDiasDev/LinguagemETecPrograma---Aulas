#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, soma;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%f", &n1);
	printf("Digite o segundo n�mero: ");
	scanf("%f", &n2);
	
	soma = n1 + n2;
	printf("A soma de %f + %f � igual a %f", n1, n2, soma);
}
