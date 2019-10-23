#include "node.h"

int main(int argc, char const *argv[]) {
  printf("printing empty list\n");
  struct node * root = malloc(sizeof(struct node));
  print_list(root);
  return 0;
}
