#include <stdio.h>
#include <ctype.h>


void cleanser(){

char c = getchar();

while(c != EOF){

  if(isalpha(c) != 0){
    putchar(c);
  }
  else if(c == ' '){
    putchar(' ');
  }
  else if(c == '\n'){
    putchar('\n');
  }
  else{
    putchar(' ');
  }
  c = getchar();
}


}
void main(){

cleanser();


}
