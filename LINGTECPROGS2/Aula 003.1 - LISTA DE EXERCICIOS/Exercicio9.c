#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int AnoAtual, AnoNasc, Idade;
	
	printf("Qual � o ano atual? \n");
	scanf("%d", &AnoAtual);
	printf("Em que ano voc� nasceu? \n");
	scanf("%d", &AnoNasc);
	
	Idade = AnoAtual - AnoNasc;
	printf("Voc� tem %d anos", Idade);
}
