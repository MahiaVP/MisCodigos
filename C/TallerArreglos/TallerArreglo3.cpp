#include <stdio.h>

int main(){
	int v,c,k;
	
	do{
		printf("Digite la cantidad de elementos que van a tener los vectores: ");
		scanf("%d",&v);
	
		int vector1[v],vector2[v],vector3[v];
		
		for(c=0;c<v;c++){
			printf("\nDigite el elemento para el vector 1: ");
			scanf("%d",&vector1[c]);
			printf("\nDigite el elemento para el vector 2: ");
			scanf("%d",&vector2[c]);
		}
		
		for(c=0;c<v;c++){
			vector3[c]=vector1[c]+vector2[c];
		}
		printf("La suma de los elementos de cada vector es: \n");
		for(c=0;c<v;c++){
			printf("%d ",vector3[c]);
		}
		
		printf("\nDesea volver a ejecutar el programa?\n1)Si\n0)No\n");
		scanf("%d",&k);
	}while(k==1);
}
