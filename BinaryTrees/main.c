#include <stdio.h>
#include "tree_methods.h"


int main()
{
    int i;
    int array[5] = {1, 3, 4, 4, 4};
    tnode *root = NULL;
    
    for (i=0; i<sizeof(array)/sizeof(int); i++) {
        root = CreateTree(root, array[i]);
    }
    
    PrintTree(root);
    
    return 0;
}
