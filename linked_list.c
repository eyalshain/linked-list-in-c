#include <stdio.h>
#include <stdlib.h>

//   ********************
//   * LINKED LIST IN C *
//   ********************


typedef struct Node{
    int value;
    struct Node *Next;

} Node;




void print_values(Node *list)
{
    Node *list2 = list;
    while (list2 != NULL)
    {
        printf("value = %d\n", list2->value);
        list2 = list2->Next;
    }
    printf("\n");
}

void set_value(Node *list, int x)
{
    list->value = x;
}

void insert_middle(Node **list, int x)
{
    Node *new_node = malloc(sizeof(Node));
    new_node->value = x;
    // list2->Next = Next;
    // (*list)->Next = list2;
    new_node->Next = (*list)->Next;
    (*list)->Next = new_node; 
    
}

void insert_end(Node **list, int x)
{
    Node *new_node = malloc(sizeof(Node));
    new_node->value = x;
    new_node->Next = NULL;

    Node *curr = (*list);
    while (curr->Next != NULL)
    {
        curr = curr->Next;
    }
    curr->Next = new_node;
}

void insert_start(Node **list, int x)
{
    Node *new_node = malloc(sizeof(Node));
    new_node->value = x;
    new_node->Next = (*list);
    *list = new_node;

}