#include <stdio.h>
#include <stdlib.h>
#include "methods.h"


#define SIZE 9


int main ()
{
    node *root = NULL;
    comparer int_comp = compare;
    callback f = display;

    /* insert data into the tree */
    int a[SIZE] = { 8, 3, 10, 1, 6, 14, 4, 7, 13};
    int i;
    printf ("--- C Binary Search Tree ---- \n\n");
    printf ("Insert: ");
    for (i = 0; i < SIZE; i++)
    {
        printf ("%d ", a[i]);
        root = insert_node (root, int_comp, a[i]);
    }
    printf (" into the tree.\n\n");

    /* display the tree */
    display_tree(root);

    printf ("\n");

    /* delete a node */
    root = delete_node(root, 14, int_comp);
    
    printf ("\n");
    /* display the tree */
    display_tree(root);
    
    return 0;
}
