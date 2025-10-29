#include <stdio.h>

int main(){
	int k,n,i,g;
	
	do{
		n=1;
		do{
			i=n+19;
			for(n=i-19;n<=i;n++){
				printf("%d\n",n);
			}
		
			if(n<1000){
				printf("Desea ver los siguientes 20 numeros?\n1)Si\n0)No\n");
				scanf("%d",&k);
				printf("\n");
			}
		}while(k==1 && n<=1000);
		
		if(n>=1000){
			printf("El limite ha sido alcanzado.\n");
			printf("Desea volver a ejecutar el programa?\n1)Si\n0)No\n");
			scanf("%d",&g);
			printf("\n");
		}else{
			printf("Desea volver a ejecutar el programa?\n1)Si\n0)No\n");
			scanf("%d",&g);
			printf("\n");
		}
	}while(g==1);
}
