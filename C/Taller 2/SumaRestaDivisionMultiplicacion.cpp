#include <stdio.h>

int main (){
	int k,sum=0,res=0,multi=0;
	float n1,n2,div=0;
	do{
		printf("Digite dos numeros separados por un espacio: ");
		scanf("%f %f",&n1,&n2);
		
		sum=n1+n2;
		res=n1-n2;
		div=(n1/n2);
		multi=n1*n2;
		
		printf("La suma es: %d\nLa resta es: %d\nLa division es: %.3f\nLa multiplicacion: %d\n",sum,res,div,multi);
		printf("Desea volver a utilizar el programa?\n1)Si\n0)No\n");
		scanf("%d",&k);
	}while(k==1);
}
