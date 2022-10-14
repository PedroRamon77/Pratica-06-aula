#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int idade1,idade2;
	
	printf("Promoção,veja se você será premiado com desconto\n\n");
	
	printf("Digite a idade da pessoa A: ");
	scanf("%d",&idade1);
	printf("Digite a idade da pessoa B: ");
	scanf("%d",&idade2); 
	
	if (idade1 %2 ==0) {
			printf("\n\nVocê foi premiado com o desconto, PARABÉNS");
	}
	return 0;
}
