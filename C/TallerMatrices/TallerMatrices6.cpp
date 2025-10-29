#include <stdio.h>

int main(){
	int k,f,c,i,n;
	do{
		printf("Digite cuantas filas tendra la matriz: ");
		scanf("%d",&f);
		printf("Digite cuantas columnas tendra la matriz: ");
		scanf("%d",&c);
		
		float m[f][c];
		
		for(i=0;i<f;i++){
			for(n=0;n<c;n++){
				printf("Digite el elemento: ");
				scanf("%f",&m[i][n]);
			}
		}
		
		float sumf[f];
		
		for(i=0;i<f;i++){
			sumf[i]=0;
			for(n=0;n<c;n++){
				sumf[i]=sumf[i]+m[i][n];
			}
		}
		
		float sumc[c];
		
		for(n=0;n<c;n++){
			sumc[n]=0;
			for(i=0;i<f;i++){
				sumc[n]=sumc[n]+m[i][n];
			}
		}
		
		printf("\n");
		
		for(i=0;i<f;i++){
			for(n=0;n<c;n++){
				printf("%.2f ",m[i][n]);
			}
			printf("= %.2f\n",sumf[i]);
		}
		
		for(i=0;i<f;i++){
			for(n=0;n<c;n++){
				sumf[i]=sumf[i]+m[i][n];
			}
		}
		
		printf("\n");
		
		for(i=0;i<c;i++){
			printf("%.2f ",sumc[i]);
		}
		
		printf("\n\n");
		
		printf("Desea volver a ejecutar el programa?\n1)Si\n0)No\n");
		scanf("%d",&k);
	}while(k==1);
}
