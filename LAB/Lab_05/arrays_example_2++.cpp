#include <iostream>
using namespace std;
 
int main(){
	int n=5;
	int datos[n],i;
	//leemos
	for(i=0;i<n;i++){
		cout<<"Ingrese en el indice "<<i<<":"; 
		cin>>datos[i];
	}
	
	//Ahora imprimimos
	for(i=0;i<n;i++){
		cout<<"\nel indice:"<<i<<" tiene:"<<datos[i];
		//scanf("%d", &datos[i]);      Hacer esto es lo mismo que hacerlo
		//                             del modo anterior
	} cout<<endl;
	return 0;
}
