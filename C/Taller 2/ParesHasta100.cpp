#include <stdio.h>

int main(){
	int k,a,sum=0;
	do{
		sum=0;
		printf("Suma de los numeros pares hasta el 100\n");
		
		for (a=1;a<=100;a++){
			if(a%2==0){
				sum=sum+a;
			}
		}
		printf("La suma es: %d\n",sum);
		printf("Desea volver a ejecutar el programa?\n1)Si\n0)No\n");
		scanf("%d",&k);
	}while(k==1);
}


