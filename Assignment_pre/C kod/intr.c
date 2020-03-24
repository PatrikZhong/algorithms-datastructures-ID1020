#include <stdio.h>

int main(){

  char c = getchar();

  while(c != EOF){

    if(c == 'a'){

          putchar('x');
        }

    else{
      putchar(c);
    }
      c = getchar();
  }

}
