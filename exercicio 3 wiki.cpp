#include <stdio.h>
#include<stdlib.h>

char string [100];
char *ponteiro = &string[0];
int x=0;
char recebe[100];   
int main (){
	
	printf("Escreva: ");
	while (1){
		
		
		
		recebe[x]=*ponteiro=getchar();
	 
		
		if (*ponteiro ==  'x'){
			printf("%s",recebe);
			
			break;
		}
		x++;
				
	}
	
	return 0;
}
