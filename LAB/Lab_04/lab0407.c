#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int random_num(){  
  int random = rand() % (2);
  return random;
}
int main(){
  srand(time(NULL));
  int i=0;
  int n=0;
  for(i=0; i<100;i++){
    if (random_num()){
      printf("Cara\n"); n++;
    }else{
      printf("Sello\n");}
  }
return 0;
}
