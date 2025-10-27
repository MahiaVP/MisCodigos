#include <stdio.h>

int main(){
	int k,n,c,i,max,a;
	do{
		printf("La matriz sera tipo n x n; digite el valor de n: ");
		scanf("%d",&n);
		int m[n][n],v[n];
		
		for(c=0;c<n;c++){
			for(i=0;i<n;i++){
				printf("\nDigite el elemento: ");
				scanf("%d",&m[c][i]);
			}
		}
		a=0;
		max=0;
		for(c=0;c<n;c++){
			for(i=0;i<n;i++){
				a=m[c][i];
				if(a>max){
					max=a;
				}
			}
			v[c]=max;
		}
		printf("\nLos elementos maximos de cada fila son:\n\n");
		for(c=0;c<n;c++){
			printf("%d ",v[c]);
		}
		printf("\n\nDesea volver a ejecutar el programa?\n1)Si\n0)No\n");
		scanf("%d",&k);
	}while(k==1);
}
