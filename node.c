#include "node.h"

void print_list(struct node * n){
  printf("[ ");
  while (n != NULL){
    printf("%i ", n->i);
    n = n->next;
  }
  printf("]\n");
}
struct node * insert_front(struct node * n, int num){
  struct node  * new = malloc(sizeof(struct node));
  new->i = num;
  new->next = n;
  return new;
}
struct node * free_list(struct node * n){

  
}
