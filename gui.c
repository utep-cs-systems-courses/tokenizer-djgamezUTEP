#include <stdio.h>
#include <stdlib.h>
#include "gui.h" //double quote for your own header files
#include "history.h"

int main(){
  char *userIn=(char*)malloc(64); /*this is where we will store read data we will allocate 64 bytes                                   for many char*/
  printf("$");
  fgets(userIn, 64, stdin);  /*stdin  reading from standard input*/

  printf("%s", userIn);/*format userIn to print*/
  if(is_space_char(*(userIn+0))==1){
    printf("The first character is a space\n");
  }else{
    printf("The first character is not a space\n") ;
  }
  printf("%s",userIn);
  char *start= word_start(userIn);
  printf("The first character of the string is: %s",start);
  printf("there are %d words", count_words(userIn));
  printf("\n");
  char** tokens;
  tokens=tokenize(userIn);
  print_tokens(tokens);
  /*  List* history=init_history();
  add_history(history, userIn);
  print_history(history);*/
  return 0;
  
  
}
