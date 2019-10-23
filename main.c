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
  return 0;
}
