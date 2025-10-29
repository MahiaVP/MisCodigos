#include <stdio.h>

int main(){
	int k,n,c,i,num;
	float prom;
	do{
		printf("La matriz sera tipo n x n; digite el valor de n: ");
		scanf("%d",&n);
		int m[n][n],sum=0;
		
		
		for(c=0;c<n;c++){
			for(i=0;i<n;i++){
				printf("\nDigite el elemento: ");
				scanf("%d",&num);
				m[c][i]=num;
				
			}
		}
		
		int max[n];
        for(c = 0; c < n; c++){
            max[c] = m[c][0];
        }
		
		for(c=0;c<n;c++){
			for(i=0;i<n;i++){
				if(m[c][i]>max[c]){
					max[c]=m[c][i];
				}
			}
		}
		
		for(c=0;c<n;c++){
			sum=sum+max[c];
		}
		
		for(c=0;c<n;c++){
			for(i=0;i<n;i++){
				printf("%d ",m[c][i]);
			}
			printf("\n");
		}
		
		prom=(float) sum/n;
		
		printf("Maximos:\n");
		for(c=0;c<n;c++){
			printf("%d\n",max[c]);
		}
		printf("El promedio de los maximos es: %.2f",prom);
		
		printf("\n\nDesea volver a ejecutar el programa?\n1)Si\n0)No\n");
		scanf("%d",&k);
	}while(k==1);
}
