int is_space_char(char current){
  if(current == '\n'||current ==' ' ){
    return 1;
  }
  return 0;
}
int is_non_space_char(char current){
  if(current == '\n' ||current == ' '){
    return 0;
  }
  return 1;
}

