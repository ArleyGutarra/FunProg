
#include <stdio.h>

int main(){
	int datos[15],i,n=15,min=0,contador=0;
	
	for(i=0;i<n;i++){
		printf("Ingrese el elemente %d: ",i+1);
		scanf("%d",&datos[i]);
	}
	for(i=0;i<n;i++) printf("%d  ",datos[i]);
	printf("\n");
	for(i=0;i<n;i++){
		if(min==0) min = datos[i];
		if(datos[i]<min) min = datos[i];
	}
	
	for(i=0;i<n;i++){
		if(min==datos[i]) contador++;
	}
	printf("\n");
	printf("se repite %d veces \n", contador);
	printf("\n");
	for(i=0;i<n;i++){
		if(min==datos[i]) printf("se encuentra en la posicion:%d\n",i);
	}
	return 0;
}

