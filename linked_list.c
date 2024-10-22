#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//   ********************
//   * LINKED LIST IN C *
//   ********************

// a very important thing to keep in mind:
// when we pass to a function a node, we are passing a copy of that node, that mean that if
// we want to modify the node's value, we need to pass a pointer (by reference).
// and if we need to modify the pointer itself, like removing the first element, 
// we need to pass a pointer to a pointer, that's why we use Node **
//
// HAPPY CODING!!!

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


Node *create_list(int x)
{
    Node *list = malloc(sizeof(Node));
    list->value = x;
    list->Next = NULL;
    return list;
}

void set_value(Node *list, int x)
{
    list->value = x;
}

int get_value(Node *list)
{
    return list->value;
}

void insert_middle(Node **list, int x)
{
    Node *new_node = malloc(sizeof(Node));
    new_node->value = x;
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

void deallocate(Node **list)
{
    Node *curr = *list;

    while (*list != NULL)
    {
        curr = curr->Next;
        free((*list));
        *list = curr;
    }
}

int size(Node *list)
{
    int count = 0;
    Node *curr = list;
    if (curr == NULL)
        return 0;

    while (curr != NULL)
    {
        count ++;
        curr = curr->Next;
    }
    return count;
}  


int search(Node *list, int x)
{
    int count = 0;
    Node *curr = list;

    if (curr == NULL)
        return 0;
    
    while (curr != NULL)
    {
        if (curr->value == x)
        {
            count++;
        }
        curr = curr->Next;
    }

    return count;

}

void remove_element(Node **list, int x)
{
    if (*list == NULL) //checks if the list is null
        return;
    if ((*list)->value == x) // checking if the first element is equal to x.
    {
        Node *to_remove = *list;  // creating a new node so we can free it.
        (*list) = (*list)->Next;
        free(to_remove);
        return;
    }

    Node *curr = (*list);
    while (curr->Next != NULL)      // iterating over the list and checking each value.
    {
        Node *next = curr->Next;
        if (next->value == x)
        {
            curr->Next = curr->Next->Next;
            free(next);
            return;
        }
        curr = curr->Next;
    }

}

void remove_duplicates(Node **list, int x)
{
    int count = search(*list, x); //count = how many times x appear in the list

    for (int i = 0l; i < count - 1; i++) // we want to remove all duplicates, but keep at least one element of x.
    {
        remove_element(list, x);
    }

}