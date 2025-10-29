#include <stdio.h>

int main (){
	int k,a,b,c;
	do{
		printf("Digite 3 numeros separados por un espacio: ");
		scanf("%d %d %d",&a,&b,&c);
		
		if(c==b+a){
			printf("la suma de %d con %d es igual a %d\n",a,b,c);
		}else if (b==a+c){
			printf("la suma de %d con %d es igual a %d\n",a,c,b);
		}else if(a==b+c){
			printf("la suma de %d con %d es igual a %d\n",b,c,a);
		}else{
			printf("La suma de dos numeros no es igual al tercero\n");
		}
		
		printf("Desea volver a ejecutar el programa?\n1)Si\n0)No\n");
		scanf("%d",&k);
	}while(k==1);
}
