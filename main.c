#include "node.h"

int main(int argc, char const *argv[]) {
  printf("printing empty list\n");
  struct node * root;
  print_list(root);
  printf("adding elemets 0-10\n");
  for (int i = 0; i <= 10; i++){
    root = insert_front(root, i);
  }
  print_list(root);
  printf("removing 0, 5, 10, and 100\n");
  root = remove_node(root, 0);
  printf("0:");print_list(root);
  root = remove_node(root, 5);
  printf("5:");print_list(root);
  root = remove_node(root, 10);
  printf("10:");print_list(root);
  root = remove_node(root, 100);
  printf("100:");print_list(root);
  printf("Freeing list\n");
  //printf("%p\n", root);
  root = free_list(root);
  print_list(root);
  return 0;
}
