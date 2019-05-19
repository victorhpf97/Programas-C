#include<stdio.h>
#include<string.h>


int main () {
	
char string1[10],string2[10];

printf("digite o seu nome: ");
gets(string1);
printf("digite outro nome: ");
gets(string2);
	
	if (strcmp (string2,string1)){
		printf("Diferente");
	}else{
		
		printf("Iguais.");
	}
	
	
	
	return 0;
 
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

