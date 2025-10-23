#include <stdio.h>

int main(){
	int k,b,e,i,multi=1;
	do{
		printf("Digite la base y el exponente separados por un espacio: ");
		scanf("%d %d",&b,&e);
		multi=1;
		for (i=0;i<e;i++){
			multi=multi*b;
		}
		printf("El resultado es: %d\n",multi);
		printf("Desea volver a ejecutar el programa?\n1)Si\n0)No\n");
		scanf("%d",&k);
	}while (k==1);
}
