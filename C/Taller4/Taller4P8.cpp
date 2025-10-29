#include <stdio.h>

int main (){
	int k,i,n;
	do{
		int sum=0;
		for(i=1;i<=10;i++){
			printf("Digite el dato numero %d: ",i);
			scanf("%d",&n);
			if(n<0){
				sum=sum+n;
			}
		}
		printf("La suma de los numeros negativos es de: %d\n",sum);
		
		printf("Desea volver a ejecutar el programa?\n1)Si\n0)No\n");
		scanf("%d",&k);
	}while(k==1);
}
