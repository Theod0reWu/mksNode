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
  if (n->next != NULL){
    free_list(n->next);
  }
  if (n != NULL){
    free(n);
  }
  //printf("%p\n", n);
  n = NULL;
  return n;
}
struct node * remove_node(struct node *front, int data){
  struct node * current = front;
  if (front->i == data){
    struct node * newfront = front->next;
    free(front);
    return newfront;
  }
  while (current->next != NULL && current->next->i != data){
    current = current->next;
  }
  if (current->next != NULL){
    struct node * remove = current->next;
    current->next = remove->next;
    free(remove);
  }
  return front;
}