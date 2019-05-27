#include<stdio.h>
#include<stdlib.h>
#include <windows.h>

int main () {
	int g, l, h, c, n,fase;
	char line [80];
	char nome[100];
	char continuar [3];
printf("bem vindo ao bingao \n");	
printf("o game mais impolgante da sua velhice (seu nome?)\n");
gets(nome);
system("cls");
while (1){
	g = rand () % 100 +1;
	
	l=0;
	h=100;
	c=0;
 
 while (1){
 
		printf("Chute um valor  \n" );
		printf("Esta entre %d - %d\n ",l , h);
		
		 scanf("%d", &n);
		if (n == g){
			
			break;
		}
				
		
		if (n < g){
		
			l = n;	
	}
			
		else
			h = n;
}
	fase++;
	printf("Bingou!!!!\n");
	printf("Voce foi supimba e zerou a fase %d do  bingao\n",fase);
	printf("Caso ouse ousar o seu reumatismo continue bingando\n\n");	
	
	
		
		
}
		
		
	return 0;	
		
	}
	
	
	
	
	
	
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

