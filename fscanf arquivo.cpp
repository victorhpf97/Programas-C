#include<stdio.h>
#include<stdlib.h>

int main () {
	
	FILE *ponteiro;
	ponteiro=fopen("C:\\Users\\ERICA\\Desktop\\teste.txt","r");
 	int x,y,z;
	 //no arquivo:10,20,30
	 fscanf(ponteiro,"%i,%i,%i",&x,&y,&z);
	 printf("%i,%i,%i",x,y,z);
	 //impresso:10,20,30
	fclose(ponteiro);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
