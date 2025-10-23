#include<stdio.h>

int main(){
	int k,a=1,suma=0;
	do{
		for(a=1;a<=10;a++){
			suma=suma+a;
		}
		printf("La suma de 1+2+3...10 es:\n%d\n",suma);
		printf("Desea volver a ejecutar el programa?\n1)Si\n0)No\n");
		scanf("%d",&k);
	}while(k==1);
}
