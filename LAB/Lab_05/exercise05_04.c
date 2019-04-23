
#include <stdio.h>

int main(){
	int i,num_valores,n;
	printf("Ingrese una cantidad de valores: ");
	scanf("%d",&num_valores);
	int vector[num_valores];
	printf("Valor a buscar: ");
	scanf("%d",&n);
	for(i=0;i<num_valores;i++){
		printf("El valor %d es: ",i);
		scanf("%d",&vector[i]);
	}
	for(i=0;i<num_valores;i++){
		if (n==vector[i]){
			printf("La posicion primera del valor introducido es %d",i);
			break;
		}
	}
	printf("\n");
	return 0;
}

