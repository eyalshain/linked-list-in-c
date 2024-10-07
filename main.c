#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"


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

