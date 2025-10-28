#include <stdio.h>

int main(){
	int k,n,c,i,num,par,imp;
	float prom1,prom2;
	do{
		printf("La matriz sera tipo n x n; digite el valor de n: ");
		scanf("%d",&n);
		int m[n][n];
		int sump=0,sumi=0,par=0,imp=0;
		
		for(c=0;c<n;c++){
			for(i=0;i<n;i++){
				printf("\nDigite el elemento: ");
				scanf("%d",&num);
				
				if(num%2==0){
					sump=sump+num;
					par=par+1;
				}else if(num%2!=0){
					sumi=sumi+num;
					imp=imp+1;
				}
			}
		}
		prom1=(float) sump/par;
		prom2=(float) sumi/imp;
		printf("\nLa suma de los numeros pares en la matriz es: %d\nEl promedio de los numeros pares es: %.2f\n",sump,prom1);
		printf("\nLa suma de los numeros impares en la matriz es: %d\nEl promedio de los numeros impares es: %.2f\n",sumi,prom2);
		
		printf("\n\nDesea volver a ejecutar el programa?\n1)Si\n0)No\n");
		scanf("%d",&k);
	}while(k==1);
}
