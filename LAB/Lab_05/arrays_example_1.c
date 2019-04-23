#include <stdio.h>
 
int main(){
	int datos[]={4,6,8,2,3};//tiene 5 datos
	int i;
	for(i=0;i<5;i++){
		printf("\nel indice:%d tiene:%d",i,datos[i]);
	}
	printf("\n");
	return 0;
}
