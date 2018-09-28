#include <stdio.h>
#include "tree_methods.h"




int main()
{
    int i;
    int array[3] = {1, 3, 4};
    tnode *root = NULL;
    
    for (i=0; i<sizeof(array)/sizeof(int); i++) {
        root = insertNode(root, array[i]);
    }
    
    print_option(root);
    root = free_option(root);

    for (i=0; i<sizeof(array)/sizeof(int); i++) {
        root = insertNode(root, 1);
    }

    print_option(root);
    
    return 0;
}
