
#include <stdio.h>
 
int main(){
	int n=6;
	int datos[n],i;
	//leemos
	for(i=0;i<n;i++){
		printf("Ingrese en el indice %d:",i);
		scanf("%d", &datos[i]);
	}
	
	//Ahora imprimimos
	for(i=0;i<n;i++){
		printf("\nel indice:%d tiene:%d",i,datos[i]*2);
		//scanf("%d", &datos[i]);      Hacer esto es lo mismo que hacerlo
		//                             del modo anterior
	} printf("\n");
	
	return 0;
}
