#include "history.h"
#include "gui.h"
#include <stdio.h>
#include <stdlib.h>
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
  Item *temp = list->root;  
  int last_id=0;
  while(temp!= NULL){
    last_id=temp->id;
    temp=temp->next;
    printf("adding %d",last_id);
  }
  Item *newNode=(Item*)malloc(sizeof(Item));
  newNode->id=last_id+1;
  newNode->str=copy_str(str, 64);
  temp=newNode;
  temp->next=NULL;
  if(list->root== NULL){
    list->root=newNode;
  }
}

/* Retrieve the string stored in the node where Item->id == id.
   List* list - the linked list
   int id - the id of the Item to find */
char *get_history(List *list, int id){
  Item *temp= list->root;

  while(temp!=NULL){
    if(id==temp->id){
      return temp->str;
      
    }
    temp=temp->next;
      }
  return NULL;
}

/*Print the entire contents of the list. */
void print_history(List *list){
  Item* temp=list->root;
  while(temp!=NULL){
    printf("This is ID--> %d \n This is the token --> %s \n",temp->id, temp->str);
    temp=temp->next;
  }
}

/*Free the history list and the strings it references.*/ 
void free_history(List *list){
  Item* temp= list->root;
  while(temp!=NULL){
    free (temp->str);
    free(temp);
    temp= temp->next;
  }
  free(list);
}

