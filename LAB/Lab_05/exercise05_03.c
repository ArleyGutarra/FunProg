
#include <stdio.h>

int main(){
	int vector[5],i;
	for(i=0;i<5;i++){
		printf("Ingrese valor %d: ",i);
		scanf("%d",&vector[i]);
	}
	printf("\n");;
	for(i=0;i<5;i++){
		printf("elemento %d : %d \n",i,vector[i])
	}
	printf("\n");
	for(i=4;i>=0;i--){
		printf("elemento %d : %d \n,i,vector[i]);
	}
		return 0;
}

