#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct Node{
    int value;
    struct Node *Next;

} Node;



void print_values(Node *list);
void set_value(Node *list, int x);
void insert_middle(Node **list, int x, Node *Next);
void insert_end(Node **list, int x);
void insert_start(Node **list, int x);

#endif