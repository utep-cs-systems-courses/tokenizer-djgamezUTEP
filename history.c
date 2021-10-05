#include "history.h"
#include "gui.h"
/* Initialize the linked list to keep the history. */
List* init_history(){
  List *new_list= (List*)malloc(sizeof(List));
  new_list->root=NULL;
  return new_list;
    }
/* Add a history item to the end of the list.
   List* list - the linked list
   char* str - the string to store
*/
void add_history(List *list, char *str){
  while(list->root->next!= NULL){
    list=list->next;
    
  }
  char *newNode=(char*)malloc(sizeof(s_item));
  newNode->id=list->id+1;
  newNode->str=copy_str(str, 64);
  list->root->next=newNode;
  newNode->next=NULL;
}

/* Retrieve the string stored in the node where Item->id == id.
   List* list - the linked list
   int id - the id of the Item to find */
char *get_history(List *list, int id){
  while(list->root->next!=NULL){
    if(id==list->root->id){
      return list->root->str;
    }
    list=list->next
      }
  return NULL;
}

/*Print the entire contents of the list. */
void print_history(List *list){
  while(list->root->next!=NULL){
    printf("This is ID--> %d \n This is the token --> %s \n",list->id, list->str);
  }
}

/*Free the history list and the strings it references. */
void free_history(List *list){
  while(list->root!=NULL){
    free (list->root->str);
    List *temp;
    temp= list->root->next;
    free (list);
    list->root=temp;
  }
}
