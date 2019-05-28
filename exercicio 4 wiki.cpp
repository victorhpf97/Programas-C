#include <stdio.h>
#include <stdlib.h>
int n;
int zero=0;
int numero1;
int numero2;
int main () {
	printf("Digite a quantidade de numeros que você deseja : ");
	scanf("%d",&n);
	while (zero<n){
		
	printf("Digite um numero: ");
	scanf("%d",&numero1);
	if (numero1>=numero2){
	numero2=numero1;
	
	
	}	
		
		
		zero++;
		
		
	}
	
	
	printf("o maior numero e %d",numero2);
	
	
 	
	return 0;
}
