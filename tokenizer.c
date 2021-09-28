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
  
