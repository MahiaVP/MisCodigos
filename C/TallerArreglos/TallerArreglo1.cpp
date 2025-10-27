#include <stdio.h>

int main (){
	int v,c,sum=0,k;
	float prom;
	do{
		printf("Digite la cantidad de elementos que va a tener el vector: ");
		scanf("%d",&v);
	
		int vector[v];
	
		for(c=0;c<v;c++){
			printf("Digite el elemento: ");
			scanf("%d",&vector[c]);
		}
		
		sum=0;
		
		for(c=0;c<v;c++){
			sum=sum+vector[c];
		}
	
		prom= (float) sum/v;
		printf("La suma de los elementos es: %d\nEl promedio de los elementos es: %.2f\n",sum,prom);
		
		printf("Desea volver a ejecutar el programa?\n1)Si\n0)No\n");
		scanf("%d",&k);
	}while(k==1);
	
}
