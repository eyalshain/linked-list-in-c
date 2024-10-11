#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct Node{
    int value;
    struct Node *Next;

} Node;



Node *create_list(int x);
void deallocate(Node **list);
void print_values(Node *list);
int get_value(Node *list);
void set_value(Node *list, int x);
void insert_middle(Node **list, int x);
void insert_end(Node **list, int x);
void insert_start(Node **list, int x);

#endif