#include "methods.h"
#include <stdio.h>
#include <stdlib.h>


/*
    delete a node and relative childs
*/
node* delete_node(node* root, int data, comparer compare)
{
    node *cursor = root;
    node *prev = NULL;
    int is_left = 0;
    int r = 0;
    
    
    if (root == NULL)
    {
        return NULL;
    }
    
    else
    {
        //search for the position
        while (cursor != NULL)
	    {
	        r = compare (data, cursor->data);
	        prev = cursor;
	  
	        if (r < 0)
	        {
	            is_left = 1;
	            cursor = cursor->left;
	        }
	        
	        else if (r > 0)
	        {
	            is_left = 0;
	            cursor = cursor->right;
	        }

	        else
	        {
	            is_left = -1;
	            if(cursor->rep == 1)
	                free(cursor);
	            
	            else     
	                cursor->rep--;
	            return root;
	        }
    	}

        if (is_left)
	        free(prev->left);

        else if (is_left == 0)
            free(prev->right);
    }
    
}


/*
    compare two integers
*/
int compare (int left, int right)
{
    if (left > right)
        return 1;
  
    if (left < right)
        return -1;
  
    return 0;
}

/*
    Recursively display tree or subtree
*/
void display_tree (node * nd)
{
    if (nd == NULL)
        return;


    /* display node data */
    printf ("%2d ", nd->data);
    printf ("Rep: %d", nd->rep);

    if (nd->left != NULL)
        printf ("(L:%d)", nd->left->data);
  
    if (nd->right != NULL)
        printf ("(R:%d)", nd->right->data);
  
    printf ("\n");

    display_tree (nd->left);
    display_tree (nd->right);
}

/*
    display a node's key
*/
void display (node * nd)
{
    if (nd != NULL)
        printf ("%d ", nd->data);
}

/*
    create a new node
*/
node *create_node (int data)
{
    node *new_node = (node *) malloc (sizeof (node));
  
    if (new_node == NULL)
    {
        fprintf (stderr, "Out of memory!!! (create_node)\n");
        exit (1);
    }

    new_node->data = data;
    new_node->rep = 1;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

/*
    insert a new node into the BST
*/
node *insert_node (node * root, comparer compare, int data)
{
    node *cursor = root;
    node *prev = NULL;
    int is_left = 0;
    int r = 0;

    if (root == NULL)
    {
        root = create_node (data);
    }
  
    else
    {
        while (cursor != NULL)
	    {
	        r = compare (data, cursor->data);
	        prev = cursor;
	  
	        if (r < 0)
	        {
	            is_left = 1;
	            cursor = cursor->left;
	        }
	        
	        else if (r > 0)
	        {
	            is_left = 0;
	            cursor = cursor->right;
	        }

	        else
	        {
	            is_left = -1;
	            cursor->rep++;
	            return root;
	        }
    	}

        if (is_left)
	        prev->left = create_node (data);

        else if (is_left == 0)
            prev->right = create_node (data);
    }

  return root;
}
