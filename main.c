#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"


int main (void) {
    
    Node list = {5, NULL};   // 5 -> null

    Node *list2 = &list;
    Node *list3 = list2;

    list.Next = malloc(sizeof(Node));
    list.Next->value = 6;
    list.Next->Next = NULL;  // 5 -> 6 -> null
    
    print_values(list3);   
    set_value(&list, 2);
    print_values(list3);    // 2 -> 6 -> null
    
    

    insert_middle(&list2, 10, list2->Next);
    print_values(list2);    // 2 -> 10 -> 6 -> null
    insert_end(&list2, 1);  // 2 -> 10 -> 6 -> 1 -> null
    print_values(list2);
    insert_start(&list2, 0);
    print_values(list2);


    return 0;
}

