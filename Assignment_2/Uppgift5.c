//README: created by Patrik Zhong, 19/09/2019, updated: 19/09/2019,
//detta program sorterar alla negativa tal i en array till dess början med hjälp av en in-place algoritm.

#include <stdio.h>

void negatives(int a[], int length){

  int i = 0;
  int j = length - 1;
  int temp;
  while(i != j){
//Varje gång i inkrementerar kommer 0 till i vara negativt, och varje gång j dekrementerar kommer j till length-1 vara negativt.
//alltså är a[0] till [i] sorterat för varje increment i i, och a[j] till a[length-1] vara positivt för dekrement av j.
    if(a[i] >= 0 && a[j] < 0 ){
      temp = a[i];
      a[i] = a[j];
      a[j] = temp;
      j--;
      i++;
    }
    else if(a[i] >= 0 && a[j] >= 0){

      j--;
    }
    else{

      i++;

    }
  }

}

int main(){

printf("length");
int length;
scanf("%d", &length);

int a[length];
printf("Numbers in array");

for(int i = 0; i<length; i++){
  scanf("%d", &a[i]);


  // printf(", %d", a[i]);

}
printf("done\n");

negatives(a, length);

  for(int i = 0; i<length; i++){
    printf("%d\n", a[i]);
  }
  printf("\n");


}
