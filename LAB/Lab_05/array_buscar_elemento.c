
#include <stdio.h>

int main(){
	int elem[7],i,n;
	for (i=0;i<=6;i++){
		printf("Ingrese el elemento %d: ",i);
		scanf("%d",&elem[i]);
	}
	printf("Ingrese el elemento a buscar: ");
	scanf("%d",&n);
	for(i=0;i<=6;i++){
		if(n==elem[i]) {printf("Elemento encontrado\n"); return 0;}
	}
	printf("Elemento no encontrado\n");
	return 0;
}

