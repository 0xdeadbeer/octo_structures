#include <stdio.h>
#include <stdlib.h>

// stack 
typedef struct {
  size_t stack_size;
  size_t stack_limit;
  void *last_child_element;
} octo_stack;

typedef struct {
  size_t data_length; 
  void *data; 
  void *parent_element;
} octo_stack_element;

octo_stack *create_stack(size_t stack_limit);
void burn_stack(octo_stack *stack);
int octo_stack_push(octo_stack *stack, size_t data_length, void *data);
int octo_stack_pop(octo_stack *stack);

// queue ??
typedef struct {
  
} octo_queue;

// linked list
typedef struct {
  size_t list_size; 
  void *root_element;
} octo_list; 

typedef struct {
  size_t data_length; 
  void *data;
  void *next_element;
} octo_list_element;

int octo_list_append(octo_list *list, octo_list_element *element);
int octo_list_remove(octo_list *list, octo_list_element *element);

// doubly linked list
typedef struct {
  size_t list_size;
  void *root_element;
} octo_dlist;

typedef struct {
  size_t data_length;
  void *data;
  void *next_element;
  void *prev_element;
} octo_dlist_element;

int octo_dlist_append(octo_dlist *dlist, octo_dlist_element *element); 
int octo_dlist_remove(octo_dlist *dlist, octo_dlist_element *element);
