#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int k,n,a,v=0;
	do{
		printf("Adivine un numero del 1 al 10: ");
		scanf("%d",&n);
		srand(time(NULL));
		a= (rand () %10)+1;
		if (n == a){
			v++;
			printf("Usted acerto %d veces(vez).\n",v);
			printf("Desea continuar?\n0)No.\n1)Si.\n");
			scanf("%d",&k);
		}else {
			do{
				printf("Intente de nuevo: ");
				scanf("%d",&n);
			}while (n != a);
			v++;
			printf("Usted acerto %d veces(vez).\n",v);
			printf("Desea continuar?\n0)No.\n1)Si.\n");
			scanf("%d",&k);
		}
	}while(k==1);
	return 0;
}
