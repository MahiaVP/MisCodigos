#include <stdio.h>

int main(){
	int k,e,a,b,c,r,t,sum=0,multi,sumi=0;
	float prom,promi;
	do{
		printf("Digite el # del programa que desea ejecutar:\n\n1. Lee 3 valores e imprime el dato del medio.\n2. Lee 3 valores e idica si la suma de 2 de ellos es igual al tercero.\n3. Serie de Fibonnacci.\n4. Numeros entre 1 y 1000 en grupos de a 20.\n5. Media de numeros ingresados hasta que se ingrese un 0.\n6. Suma y media de los numeros pares e impares entre 1 y 200.\n7. Suma de cuadrados de los primeros 100 numeros enteros.\n8. Suma de numeros negativos.\n");
		scanf("%d",&e);
		
		switch (e){
			case 1:
				printf("Digite 3 valores separados por un espacio cada uno: ");
				scanf("%d %d %d",&a,&b,&c);
			
				if ((a<b && a>c)||(a>b && a<c)) {
					printf("El valor del medio es %d\n",a);
				} else if ((b<a && b>c)||(b>a && b<c)) {
					printf("El valor del medio es %d\n",b);
				} else if ((c<b && c>a)||(c>b && c<a)) {
					printf("El valor del medio es %d\n",c);
				}
				break;
			case 2:
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
				break;
			case 3:
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
				break;
			case 4:
				a=1;
				do{
					b=a+19;
					printf("\n");
					
					for(a=b-19;a<=b;a++){
						printf("%d\n",a);
					}
				
					if(a<1000){
						printf("Desea ver los siguientes 20 numeros?\n1)Si\n0)No\n");
						scanf("%d",&c);
						printf("\n");
					}
				}while(c==1 && a<=1000);
				
				if(a>=1000){
					printf("El limite ha sido alcanzado.\n");
				}
				break;
			case 5:
				sum=0;
				b=0;
		
				do{
					printf("Digite un numero: ");
					scanf("%d",&a);
					
					sum=sum+a;
					if(a!=0){
						b++;
					}
				}while(a!=0);
				
				prom=(float) sum/b;
				
				printf("El promedio de los datos es: %.2f\n",prom);
				break;
			case 6:
				sum=0;
				sumi=0;
				c=0;
				r=0;
				for(b=1;b<=200;b++){
					if(b%2==0){
						sum=sum+b;
						c++;
					}else{
						sumi=sumi+b;
						r++;
					}
				}
				prom=(float) sum/c;
				promi=(float) sumi/r;
				
				printf("La suma de los numeros pares entre 1 y 200 es: %d\nEl promedio de los numeros pares entre 1 y 200 es: %.0f\n",sum,prom);
				printf("La suma de los numeros impares entre 1 y 200 es: %d\nEl promedio de los numeros impares entre 1 y 200 es: %.0f\n",sumi,promi);
				
				break;
			case 7:
				sum=0;
		
				for(b=1;b<=100;b++){
					multi=b*b;
					sum=sum+multi;
				}
				
				printf("La suma de los cuadrados de los numeros entre 1 y 100 es: %d\n",sum);
				break;
			case 8:
				sum=0;
				for(b=1;b<=10;b++){
					printf("Digite el dato numero %d: ",b);
					scanf("%d",&a);
					if(a<0){
						sum=sum+a;
					}
				}
				printf("La suma de los numeros negativos es de: %d\n",sum);
				break;
			default:
				printf("Opcion no valida\n");
		}
		printf("Desea volver a ejecutar el programa?\n1)Si\n0)No\n");
		scanf("%d",&k);
	}while(k==1);
}

