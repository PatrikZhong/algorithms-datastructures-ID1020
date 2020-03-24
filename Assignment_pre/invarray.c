#include <stdio.h>


void main(){

printf("How many Elements?");
int nrElements;
scanf("%d", &nrElements);


int Elements[nrElements];
int i;

for(i = 0; i < nrElements; i++){
  scanf("%d", &Elements[i]);
}

for(i = 0; i < nrElements; i++){
  printf("%d", Elements[nrElements - 1 - i]);
}


}
