#include <stdio.h>
#include <stdlib.h>

//   ********************
//   * LINKED LIST IN C *
//   ********************


typedef struct Node{
    int value;
    struct Node *Next;

} Node;

void print_values(Node *list);
void set_value(Node *list, int x);
void insert_middle(Node **list, int x, Node *Next);
void insert_end(Node **list, int x);

int main (void) {
    
    Node list = {5, NULL};
    Node *list2 = &list;
    Node *list3 = list2;
    list.Next = malloc(sizeof(Node));
    list.Next->value = 6;
    list.Next->Next = NULL;
    
    print_values(list3);
    set_value(&list, 2);
    print_values(list3);
    
    

    insert_middle(&list2, 10, list2->Next);
    print_values(list3);
    insert_end(&list3, 1);
    print_values(list3);



    return 0;
}

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

void insert_middle(Node **list, int x, Node *Next)
{
    Node *list2 = malloc(sizeof(Node));
    list2->value = x;
    list2->Next = Next;
    (*list)->Next = list2;
    
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