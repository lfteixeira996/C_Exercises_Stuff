#include <stdio.h>
#include "tree_methods.h"


/*  OPTIONS */
//Print
void print_option(tnode* root)
{
    printf("\n");
    PrintTree(root);
    printf("\n");
}

//Free
tnode *free_option(tnode* root)
{
    root = freeAlTree(root);
    printf("\nTree Deleted!\n"); 
    return root;
}



/***************************************/

/*Create a new Node*/
tnode *CreateNode(int val)
{
    tnode *new_Node = (tnode*)malloc(sizeof(tnode)); 
    
    new_Node->data = val;
    new_Node->rep  = 1;
    new_Node->left = new_Node->right = NULL;
    
    return new_Node;
}


/*Insert a node in the Tree*/
tnode *insertNode(tnode* root, int val)
{   
    /*
        side = 0 - right node
        side = 1 - left node
        side = -1 - rep++
    */
    int side;
    
    tnode * new_node = root;
    tnode * prev_node = root;
    
    
    /*First Node*/
    if(root == NULL)
    {
        root = CreateNode(val);
        return root;
    }
    
    else
    {
        while(new_node != NULL)
        {
            prev_node = new_node;
            
            if(val > new_node->data)
            {
                new_node = new_node->right;
                side = 0;
            }
            
            else if(val < new_node->data)
            {
                new_node = new_node->left;
                side = 1; 
            }
            
            else
            {
                side = -1;
                break;
            }
           
        }
        
        if(side == 0)
            prev_node->right = CreateNode(val);
        
        else if(side == 1)
            prev_node->left = CreateNode(val);   
            
        else
            prev_node->rep++;     
    }
    
    return root;
}


/*remove a node from the Tree*/
tnode *deleteNode(tnode* root, int val)
{   
    /*
        side = 0  - right node
        side = 1  - left node
        side = -1 - rep--
    */
    int side;
    
    tnode *next_node = root;
    tnode *curr_node = root;
    tnode *prev_node = root;
    
    /*If Tree is Empty*/
    if(root == NULL)
    {
        printf("Tree is Empty!");
        return root;
    }
    
    
    /*remove the root*/
    else if(root->data == val)
    {
        /*check if the rep of root is bigger than 1*/
        if(root->rep > 1)
        {
            root->rep--;
        }
        
        /*if rep is 1, remove all tree (all nodes)*/
        else
        {
            freeAlTree(root);
        }
        
        return root;
    }
    
    
    
    
    return root;
}


/*Free all nodes of the Tree*/
tnode *freeAlTree(tnode* root)
{
    if (root == NULL)  return;
    
    /* first delete both subtrees */
    freeAlTree(root->left); 
    freeAlTree(root->right); 
    
    /* then delete the node */
    printf("\nDeleting node: %d", root->data); 
    free(root); 
    root = NULL;
    
 
    return root;
}


/*Print the tree*/
void PrintTree(tnode* root)
{
   if(root == NULL)
    return;
    
   printf("%2d %2d ", root->data, root->rep);
   
   if(root->left != NULL)
   {
       printf("(L:%d)", root->left->data);
   }
   
   if(root->right != NULL)
   {
       printf("(R:%d)", root->right->data);
   }
    
    printf("\n");
    PrintTree(root->left);
    PrintTree(root->right);
}
