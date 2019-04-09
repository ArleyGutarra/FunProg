#include <iostream>
#include <iomanip> //Import the library of manipulators 
#include <cmath>
using namespace std;

int main(){
int base, num, newnum, i;
cout<<"Ingrese  una base (octal, binario o decimal): ";
cin>>base;
cout<<"Ingrese el numero que quiere cambiar de base: ";
cin>>num;
if (base == 8){ cout<<"El numero en base decimal es: "<<dec<<num<<endl;}
else if (base == 10){ cout<<"El numero en base decimal es: "<<num<<endl;}
else{
 newnum=0; i=0;
 do{
  newnum += (num - (num/10)*10)*pow(2,i);
  num /= 10;
  i++;
 }while(num/10 != 0);
 newnum += num*pow(2,i);
 cout<<"El numero en base decimal es: "<<newnum<<endl;
}
return 0;
}
