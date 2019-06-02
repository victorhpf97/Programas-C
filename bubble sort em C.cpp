#include <stdio.h>
#include <stdlib.h>

int lista[9]={3,2,1,5,6,7,8,9,4};
int y=0;
int x;
int recebe;
int valor;
int main (){
	while(lista[valor]!='\0'){
		
		valor++;
	}
		
	
	
	
  for (x=0;x<valor;x++){
  	
  	
  	for(y=0;y<valor-2;y++){
  		if (lista[y]>lista[y+1]){
  			recebe=lista[y];
  			lista[y]=lista[y+1];
			lista[y+1]=recebe;  	
  			
		  }
  		
  		
	  }
  }
	
	printf("O primeiro elemente da lista e :%d",lista[1]);
 
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
	
}
