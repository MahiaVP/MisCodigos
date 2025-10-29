#include <stdio.h>

int main(){
	int k,n;
	float prom;
	
	do{
		int sum=0,m=0;
		
		do{
			printf("Digite un numero: ");
			scanf("%d",&n);
			
			sum=sum+n;
			if(n!=0){
				m++;
			}
		}while(n!=0);
		
		prom=(float) sum/m;
		
		printf("El promedio de los datos es: %.2f\n",prom);
		printf("Desea volver a ejecutar el programa?\n1)Si\n0)No\n");
		scanf("%d",&k);
	}while(k==1);
}
