#include <stdio.h>

int main (){
	int v,c,n,k;
	do{
		printf("Digite la cantidad de elementos del vector: ");
		scanf("%d",&v);
	
		int vector[v];
		for(c=0;c<v;c++){
			printf("\nDigite el elemento: ");
			scanf("%d",&n);
			if(n%2==0){
				vector[c]=n;
			}else{
				printf("\nIndique solo numeros pares\n");
				c=c-1;
			}
		}
		printf("\n");
		for(c=0;c<v;c++){
			printf("%d esta en la posicion %d\n",vector[c],c);
		}
		printf("\n");
		for(c=0;c<v;c++){
			printf("%d ",vector[c]);
		}
		printf("\n\nDesea volver a ejecutar el programa?\n1)Si\n0)No\n");
		scanf("%d",&k);
	}while(k==1);
	
	
}
