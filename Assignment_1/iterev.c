#include <stdio.h>
//README, author: Patrik Zhong
//Programmet tar emot chars från getchar, lägger det i en char array och outputtar reverse
//SKapad 2019-09-03, uppdaterad 2019-09-03

void main(){

//skapa array
int i;
int elements_length = 5;
char elements[elements_length];

for(i = 0; i < elements_length; i++){
  //ta det som ligger i buffer, lägg i index i.
  elements[i] = getchar();

}

int k;
for(k = 0; k < elements_length; k++){
  putchar(elements[elements_length - 1 - k]);

}


}
