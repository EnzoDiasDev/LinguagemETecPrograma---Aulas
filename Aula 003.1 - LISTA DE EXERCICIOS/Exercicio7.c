#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int N1, Antes, Depois;
	
	printf("Digite um n�mero: ");
	scanf("%d", &N1);
	
	Antes = N1 - 1;
	Depois = N1 + 1;
	printf("O antecessor de %d � %d, e o sucessor � %d", N1, Antes, Depois);
}
