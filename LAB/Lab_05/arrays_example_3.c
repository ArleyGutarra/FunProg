
#include <stdio.h>
 
int main(){
	int n=6;
	int datos[n],i,max,min;
	//leemos
	for(i=0;i<n;i++){
		printf("Ingrese en el indice %d:",i);
		scanf("%d", &datos[i]);
	}
	max = -32,768; min = 32,767;
	
	for (i=0;i<n;i++){
		if (datos[i]>=max) max = datos[i];
	}
	
	for (i=0;i<n;i++){
		if (datos[i]<=min) min = datos[i];
	}
	printf("El mayor numero es:%d \n",max);
	printf("El menor numero es:%d \n",min);	
	return 0;
}
