#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float Raio, Area;
	
	printf("Digite o raio do c�rculo: ");
	scanf("%f", &Raio);
	
	Area = 3.14 * (Raio * Raio);
	printf("A �rea total do c�culo �: %f", Area);
}
