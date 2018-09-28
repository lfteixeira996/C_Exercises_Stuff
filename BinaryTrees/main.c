#include <stdio.h>
#include "tree_methods.h"


int main()
{
    int i;
    int array[5] = {1, 3, 0, 4, 2};
    tnode *root = NULL;
    
    for (i=0; i<sizeof(array)/sizeof(int); i++) {
        root = CreateTree(root, array[i]);
    }
    
    PrintTree(root);
    
    return 0;
}
