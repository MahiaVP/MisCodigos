#include <stdio.h>

int main(){
	int k,i;
	
	do{
		int sump=0,sumi=0,np=0,ni=0;
		float promp,promi;
		for(i=1;i<=200;i++){
			if(i%2==0){
				sump=sump+i;
				np++;
			}else{
				sumi=sumi+i;
				ni++;
			}
		}
		promp=(float) sump/np;
		promi=(float) sumi/ni;
		
		printf("La suma de los numeros pares entre 1 y 200 es: %d\nEl promedio de los numeros pares entre 1 y 200 es: %.0f\n",sump,promp);
		printf("La suma de los numeros impares entre 1 y 200 es: %d\nEl promedio de los numeros impares entre 1 y 200 es: %.0f\n",sumi,promi);
		printf("Desea volver a ejecutar el programa?\n1)Si\n0)No\n");
		scanf("%d",&k);
	}while(k==1);
}
