#include <stdio.h>

int main(){
	int k,f,c,i,n,g;
	do{
		printf("Indique cuantas filas tendra la matriz: ");
		scanf("%d",&f);
		
		printf("Indique cuantas columnas tendra la matriz: ");
		scanf("%d",&c);
		
		int m[f][c];
		int par=0;
		
		for(n=0;n<f;n++){
			for(i=0;i<c;i++){
				printf("\nDigite el elemento: ");
				scanf("%d",&g);
				m[n][i]=g;
				
				if(g%2==0){
					par=par+1;
				}
			}
		}
		
		for(n=0;n<f;n++){
			for(i=0;i<c;i++){
				printf("%d ",m[n][i]);
			}
			printf("\n");
		}
		
		printf("\nEn total hay %d numeros pares\n\n",par);
		
		printf("\n\nDesea volver a ejecutar el programa?\n1)Si\n0)No\n");
		scanf("%d",&k);
	}while(k==1);
}
