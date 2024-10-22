#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "linked_list.h"


int main (void) {
    
   
    Node *list = create_list(1);

    // Node *curr = list;

    insert_end(&list, 2);
    insert_end(&list, 3);
    insert_start(&list, 0);
    insert_end(&list, 5);
    insert_middle(&(list->Next->Next->Next), 4);

    print_values(list);

    printf("number 1 appeared %d times in the list\n", search(list, 1));
    printf("size = %d\n\n", size(list));

    remove_element(&list, 0);
    remove_element(&list, 3);

    print_values(list);

    insert_end(&list, 2);
    insert_end(&list, 2);
    insert_start(&list, 2);
    
     
    print_values(list);
    remove_duplicates(&list, 2);
    print_values(list);


    deallocate(&list);

    return 0;
}

