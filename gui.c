#include <stdio.h>
#include <stdlib.h>
#include "gui.h" //double quote for your own header files

int main(){
  char *userIn=(char*)malloc(64); /*this is where we will store out read data*/
  printf("$");
  fgets(userIn, 64, stdin);  /*stdin  reading from standard input*/

  printf("%s", userIn);/*format userIn to print*/
  if(is_space_char(*(userIn+0))==1){
    printf("The first character is a space\n");
  }else{
    printf("The first character is not a space\n") ;
  }
  return 0;
}
