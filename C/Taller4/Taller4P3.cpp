#include <stdio.h>

int main(){
	int a,b,c,k;
	int r,t;
	do{
		r=0;
		a=0;
		b=1;
		printf("Digite cuantas veces quiere que se realice la secuencia de Fibonacci: ");
		scanf("%d",&t);
	
		do{
			c=a+b;
			a=b;
			b=c;
			r++;
			printf("%d\n",c);	
		}while (r<t);
		
		printf("Desea volver a ejecutar el codigo?\n1)Si\n0)No\n");
		scanf("%d",&k);
	}while(k==1);
}
