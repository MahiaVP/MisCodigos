#include <stdio.h>
#include <stdlib.h>
int main(){
	int k,a,b,c,aux;
	do{
		printf("Digite 3 numeros separados por un espacio: ");
		scanf("%d %d %d",&a,&b,&c);
		
		aux = a;
		a=b;
		b=c;
		c=aux;
		
		printf("A es: %d\n",a);
		printf("B es: %d\n",b);
		printf("C es: %d\n",c);
		
		printf("Desea volver a ejecutar el programa?\n1)Si\n0)No\n");
		scanf("%d",&k);
	}while(k==1);
return 0;
}
