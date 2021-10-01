#include <stdlib.h>
#include <stdio.h>
int is_space_char(char current){
  if(current == '\n'||current ==' '||current == '\0' ){
    return 1;
  }
  return 0;
}
int is_non_space_char(char current){
  if(current == '\n' ||current == ' '||current == '\0'){
    return 0;
  }
  return 1;
}
char *word_start(char *str){
  int i=0;
  
  while(is_space_char(str[i])==1){
      
	i++;
    }
  return (str+i);
  }
  
  char *word_end(char *str){
    int i=0;
    while(is_non_space_char(str[i])==1){
      i++;
    }
    return str+i;
  }
int count_words(char *str){
  
  int word_ct=-1;
  while (str[0]!= '\0'){
    str=word_start(str);
    str=word_end(str);
    word_ct++;
    
  }
  if (word_ct==-1){
    return 0;
  }
  return word_ct;
}
char *copy_str(char *src, short len){
  int i=0;
  char *stringCopy=(char*)malloc(len);
  while(*(src+i)!='\0'&&i<len){
      *(stringCopy+i)=*(src+i);
      i++;
  }
      
      return stringCopy;
}
char **tokenize(char* str){
  int i=0;
  int word_ct= count_words(str);
  char **tokens= (char**)malloc(sizeof (char*) *( word_ct+1));
  char* start;
  char* end;
  int len;
  char* newToken;
  start=str;
  while(i<word_ct){
      start=word_start(start);
      end=word_end(start);
      len=end-start;
      newToken= copy_str(start, len);
      tokens[i]=newToken;
      i++;
      start=end;
    }
    tokens[i]=NULL;
    return tokens;
  }

  void print_tokens(char **toks){
    int i=0;
    while(toks[i]!=NULL){
      printf("%d:  %s \n", i, toks[i]);
      i++;
    }
  }
  
