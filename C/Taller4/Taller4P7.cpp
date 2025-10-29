#include <stdio.h>

int main(){
	int k,i,multi;
	
	do{
		int sum=0;
		
		for(i=1;i<=100;i++){
			multi=i*i;
			sum=sum+multi;
		}
		
		printf("La suma de los cuadrados de los numeros entre 1 y 100 es: %d\n",sum);
		printf("Desea volver a ejecutar el programa?\n1)Si\n0)No\n");
		scanf("%d",&k);
	}while(k==1);
}
