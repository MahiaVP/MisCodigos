#include <stdio.h>

int main(){
	int k,f,c,n,i;
	float prom;
	
	do{
		printf("Indique cuantas filas tendra la matriz: ");
		scanf("%d",&f);
		
		printf("Indique cuantas columnas tendra la matriz: ");
		scanf("%d",&c);
		
		int m[f][c],sum=0,tn=0;
		
		for(n=0;n<f;n++){
			for(i=0;i<c;i++){
				
				printf("\nDigite el elemento: ");
				scanf("%d",&m[n][i]);
				sum=sum+m[n][i];
				tn=tn+1;
			}
		}
	
		int max=m[0][0], min=m[0][0];
		
		for(n=0;n<f;n++){
			for(i=0;i<c;i++){
				if(m[n][i]>max){
					max=m[n][i];
				}else if(m[n][i]<min){
					min=m[n][i];
				}
			}
		}
			
		for(n=0;n<f;n++){
			for(i=0;i<c;i++){
				printf("%d ",m[n][i]);
			}
			printf("\n");
		}

		prom=(float) sum/tn;
		
		printf("El valor maximo de la matriz es: %d\n",max);
		printf("El valor minimo de la matriz es: %d\n",min);
		printf("El promedio de los valores de la matriz es: %.2f\n",prom);
		printf("\n\nDesea volver a ejecutar el programa?\n1)Si\n0)No\n");
		scanf("%d",&k);
	}while(k==1);
}
