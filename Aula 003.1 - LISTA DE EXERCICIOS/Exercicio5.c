#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float ValorHTrabalhada, Salario;
	int QHoras;
	
	printf("Quanto voc� ganha por hora trabalhada? \n");
	scanf("%f", &ValorHTrabalhada);
	printf("Quantas horas voc� trabalha por m�s? \n");
	scanf("%d", &QHoras);
	
	Salario = ValorHTrabalhada * QHoras;
	printf("O valor do seu sal�rio � de: %.2f", Salario);
}
