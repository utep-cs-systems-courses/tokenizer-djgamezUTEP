int is_space_char(char current);
int is_non_space_char(char current);
char *word_start(char *str);
char *word_end(char *str);
void print_tokens(char **toks);
int count_words(char* str);
char *copy_str(char *src, short len);
char **tokenize(char* str);
