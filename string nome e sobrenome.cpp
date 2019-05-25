#include<stdio.h>
#include<string.h>

char primeiro[100];
char segundo[100];
char full [200];

int main (){
	
	
	
	 printf("digite o primeiro nome: ");
	 fgets(primeiro,sizeof(primeiro),stdin);
	 primeiro[strlen(primeiro)-1]='\0';
			
	
	 printf("digite o segundo nome: ");
	 fgets(segundo,sizeof(segundo),stdin);
	 segundo[strlen(segundo)-1]='\0';
			
			 strcpy(full,primeiro);
			 strcat(full," ");
			 strcat(full,segundo);
			 printf("%s",full);
	
	
	
	
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
