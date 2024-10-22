#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct Node{
    int value;
    struct Node *Next;

} Node;



Node *create_list(int x);                 // creating a list
void deallocate(Node **list);             // deallocating the list from memory
void print_values(Node *list);            // printing the values
int get_value(Node *list);                // returning the value of the current node
void set_value(Node *list, int x);        // setting a value
void insert_middle(Node **list, int x);   // inserting a Node at the middle
void insert_end(Node **list, int x);      // inserting at the end
void insert_start(Node **list, int x);    // inserting at the start
int size(Node *list);                     // returning the size
int search(Node *list, int x);            // searching for a specific value and returning the amount of time he had appeared 
void remove_element(Node **node, int x);  // removing an elements once

void remove_duplicates(Node **, int x);   // removing all duplicates from a list


#endif