#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int N1, Dobro, Triplo;
	
	printf("Digite um n�mero: ");
	scanf("%d", &N1);
	
	Dobro = N1 * 2;
	Triplo = N1 * 3;
	printf("O dobro de %d � %d, e o triplo � %d", N1, Dobro, Triplo);
}
