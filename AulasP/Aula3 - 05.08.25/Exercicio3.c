#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, soma;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%d", &n1); //%d serve para guardar na mem�ria, j� o &n1 � para referenciar a vari�vel lida.
	
	printf("Digite o segundo n�mero: ");
	scanf("%d", &n2);
	
	soma = n1 + n2;
	
	printf("A soma de %d e %d �: %d", n1, n2, soma);
	
}
