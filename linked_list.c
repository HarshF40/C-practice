#include<stdio.h>
#include<stdlib.h>

typedef struct list{
  int data;
  struct list *next;
}list;

int main(){
  int no_of_node;
  printf("\nEnter The Number Of Nodes: ");
  scanf("%d",&no_of_node);
  //first Node
  list *head = malloc(sizeof(list));
  head->next = NULL;
  head->data = 1;

  list *t = head;

  //N-1 nodes
  for(int i=2;i<=no_of_node;i++){
    list *new_node = malloc(sizeof(list));
    new_node->next = NULL;
    new_node->data = i;
    t->next = new_node;
    t = new_node;
    new_node = NULL;
    free(new_node);
  }
  free(t);

  for(list* i = head;i!=NULL;i=i->next){
    printf("%d ",i->data);
  }

  //freeing nodes to avoid memory leak
  t = head;
  list* temp;
  while(t!=NULL){
    temp = t;
    t=t->next;
    free(temp);
  }

  return 0;
}
