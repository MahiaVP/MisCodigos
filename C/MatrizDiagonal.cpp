#include <stdio.h>

int main(){
    int n,i,c,k;
    
	do{
		printf("La matriz sera de NxN; indique el valor de N: ");
	    scanf("%d",&n);
	      
	    int M1[n][n],M2[n][n],M3[n][n];
	    if(n>2 && n<50){
	        for(i=0;i<n;i++){
	        	for(c=0;c<n;c++){
	                printf("Digite el elemento: ");
	                scanf("%d",&M1[i][c]);
	                }
	        }
	        printf("\n°Matriz 1:°\n\n");
	            
	        for(i=0;i<n;i++){
	            for(c=0;c<n;c++){
	                printf("%d ",M1[i][c]);
	                }
	            printf("\n");
	        }
	        printf("\n°Matriz 2 diagonal en 0:°\n\n");
	            
	        for(i=0;i<n;i++){
	            for(c=0;c<n;c++){
	                if(i==c){
	                	M2[i][c]=0;
	                }else{
	                    M2[i][c]=M1[i][c];
	                }
	            }
	        }
	            
	        for(i=0;i<n;i++){
	            for(c=0;c<n;c++){
	                printf("%d ",M2[i][c]);
	            }
	            printf("\n");
	    	}
	        printf("\n°Matriz 3 resultado final:°\n\n");
	            
	        for(i=0;i<n;i++){
	            for(c=0;c<n;c++){
	                if(c>i || c==i){
	                    M3[i][c]=0;
	                }else{
	                    M3[i][c]=M2[i][c]+M2[c][i];
	                }
	            }
	        }
	            
	        for(i=0;i<n;i++){
	            for(c=0;c<n;c++){
	                printf("%d ",M3[i][c]);
	            }
	            printf("\n");
	        }  
			printf("\n");   
	    } else {
	        printf("N no esta dentro de los limites.\n");
	    }
	    
	    printf("Desea volver a ejecutar el programa?\n1)Si\n0)No\n");
	    scanf("%d",&k);
	} while(k==1);    
}
