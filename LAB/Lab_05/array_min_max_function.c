
#include <stdio.h>

int minimo(int vec[],int n1); // Esta funcion halla el minimo
int menores(int vec[],int menor,int n1); // Esta funcion cuenta las veces 
									    // que aparece el minimo

int main(){
	int n=6;
	int i,menor,aparece,a[n];
	//leer
	for(i=0;i<n;i++){
		printf("Ingrese el %d elemento:",i);
		scanf("%d",&a[i]);
	}
	//menor
	menor = minimo(a,n);
	printf("\nel menor es: %d", menor);
	//veces menor
	aparece = menores(a,menor,n);
	printf("\nel menor parece:%d veces\n",aparece);
	return 0;
}


int minimo(int vec[],int n1){
	int menor,i;
	menor = vec[0];
	for (i=0;i<(n1);i++){
		if(menor>vec[i]) menor = vec[i];
	}
	return menor;
}

int menores(int vec[],int menor,int n1){
	int i, aparece=0;
	int lugares[n1];
	for(i=0;i<n1;i++){
		if(vec[i] == menor){
		aparece++; lugares[aparece] = i;
		printf("\nel menor:%d aparece en el lugar:%d",menor,lugares[aparece]);
		}
	}
	return aparece;
}
