#include <stdio.h>

int main(){
	  int fila,columna;

	float precio=0;
    int asientos[5][5];
    	int opcion,i,j;
    

   
printf("opciones\n");
	printf(" 1.-Desea comprar una entrada\n 2.-Mostrar ganacias\n");
	scanf("%d",&opcion);
	do{    
	
		if (opcion==1)
	    {
		    printf("Ingresa el numero de fila \n ");
		     scanf("%d",&fila);		
	          printf("Ingresa el numero de columna \n");
		       scanf("%d",&columna);
		       	
		       	
		       	
	   if (asientos[fila-1][columna-1]==0)
	      { 
      	   asientos[fila-1][columna-1]=1;
      	    printf("Asiento vendido");	
      	     printf("\n"); 
	         }else{
				printf("asiento ocupado"); 
				 }
	         
	    }else{
	  
	   for (i = 0; i <5; i++)
	    {
	      for (j = 0; j <5; j++)
	       {
			if (i==0)
			{   if (asientos[i][j]==1)
			{
			  	precio=precio+5.0;	
			}	
			
			}else if(i!=0 || i!=4)
			{
			if (asientos[i][j]==1)
			{
			precio=precio+3.5;	
			}
				
			}else if(i==4)
			{if (asientos[i][j]==1)
			{
				precio=precio+2.5;	
			}	
			}
	      }
	    }

	   printf("Las ganacias actuales son "); 
	   printf("%f",precio);		
	  }
	
	printf("Menu de opciones\n 1.-Desea comprar una entrada\n 2.-Mostrar ganacias");
    scanf("%d",&opcion);
    precio=0;
}while(opcion!=3);
	return 0;
	}

