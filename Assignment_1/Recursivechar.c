#include<stdio.h>


void recursive(){

char t;
if ((t = getchar()) != '\n'){
  recursive();
  putchar(t);
}


}

int main(){

recursive();
putchar('\n');

}
