#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, n3, soma;
	float media;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%d", &n1);
	printf("Digite o segundo n�mero: ");
	scanf("%d", &n2);
	printf("Digite o terceiro n�mero: ");
	scanf("%d", &n3);
	
	soma = n1 + n2 + n3;
	media = soma / 3;
	
	printf("A m�dia entre %d, %d e %d �: %f", n1, n2, n3, media);
}
