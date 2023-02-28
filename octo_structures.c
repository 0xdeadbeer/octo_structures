#include "./octo_structures.h"

// Stack
octo_stack *create_stack(size_t stack_limit) {
  octo_stack *new_stack = malloc(sizeof(octo_stack));  
  if (new_stack == NULL) return NULL;

  new_stack->stack_size = 0;
  new_stack->stack_limit = stack_limit; 
  new_stack->last_child_element = NULL;

  return new_stack;
}

void burn_stack(octo_stack *stack) {

}

int octo_stack_push(octo_stack *stack, size_t data_length, void *data) {
  if (stack == NULL) return -1;
  if (stack->stack_size++ > stack->stack_limit) return -1;

  octo_stack_element *new_element = malloc(sizeof(octo_stack_element));

  new_element->data_length = data_length;
  new_element->data = data;
  new_element->parent_element = stack->last_child_element;

  stack->last_child_element = new_element; 
  stack->stack_size++;

  return 0;
}

int octo_stack_pop(octo_stack *stack) {
  if (stack == NULL) return -1; 
  if (stack->last_child_element == NULL) return -1;

  octo_stack_element *last_element = stack->last_child_element;
  stack->last_child_element = last_element->parent_element;

  free(last_element);
  stack->stack_size--;

  return 0;
}

// Linked list
int octo_list_append(octo_list *list, octo_list_element *element) {

}

int octo_list_remove(octo_list *list, octo_list_element *element) {

}

// Doubly linked list
int octo_dlist_append(octo_dlist *dlist, octo_dlist_element *element) {

}

int octo_dlist_remove(octo_dlist *dlist, octo_dlist_element *element) {

}

