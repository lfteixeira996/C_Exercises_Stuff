#include <stdio.h>
#include "tree_methods.h"




int main()
{
    int i;
    int array[5] = {1, 0, 3, 4, 2};
    tnode *root = NULL;
    
    for (i=0; i<sizeof(array)/sizeof(int); i++) {
        root = insertNode(root, array[i]);
    }
    
    print_option(root);
    root = delete_node_option(root, 1);

   
    

    print_option(root);
    
    return 0;
}
