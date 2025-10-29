#include <stdio.h>

int main(){
	int k,a,b,c;
	do{
		printf("Digite 3 valores separados por un espacio cada uno: ");
		scanf("%d %d %d",&a,&b,&c);
		
		if ((a<b && a>c)||(a>b && a<c)) {
			printf("El valor del medio es %d\n",a);
		} else if ((b<a && b>c)||(b>a && b<c)) {
			printf("El valor del medio es %d\n",b);
		} else if ((c<b && c>a)||(c>b && c<a)) {
			printf("El valor del medio es %d\n",c);
		}
		
		printf("Desea volver a ejecutar el programa?\n1)Si\n0)No\n");
		scanf("%d",&k);
	}while(k==1);
}
