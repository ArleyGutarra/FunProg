
#include <stdio.h>
#define n 5

int main(){
	int i,menor,aparece =0,a[n],lugares[n];
	//leer
	for (i=0;i<n;i++){
		printf("Ingrese el %d elemento:",i);
		scanf("%d",&a[i]);
	}
	
	//menor
	menor = a[0];
	for (i=0;i<(n);i++){
		if(menor>a[i]){
			menor = a[i];
		}
	}
	printf("\nel menor es:%d",menor);
	
	//veces menor
	for (i=0;i<(n);i++){
		if (a[i]==menor){
			aparece++;
			lugares[aparece]=i;
			printf("\nel menor:%d aparece en el lugar:%d",menor,lugares[aparece]);
		}
	}
	printf("\nel menor aparece: %d veces \n",aparece);
	return 0;
}
