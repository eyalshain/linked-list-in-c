#include <stdio.h>
#include <stdlib.h>

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
    

    deallocate(&list);

    


    

    return 0;
}

