

typedef struct node
{
    int data;
    int rep;
    struct node *left;
    struct node *right;
}tnode;


/*Create a new Node*/
tnode *CreateNode(int val)
{
    tnode *new_Node = (tnode*)malloc(sizeof(tnode)); 
    
    new_Node->data = val;
    new_Node->left = new_Node->right = NULL;
    
    return new_Node;
}


/*Create a new Tree*/
tnode *CreateTree(tnode* root, int val)
{   
    /*
        side = 0 - right node
        side = 1 - left node
    */
    
    tnode * new_node = root;
    tnode * prev_node = root;
    
    int side;
    
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
                new_node = prev_node->right;
                side = 0;
            }
            
            else
            {
                new_node = prev_node->left;
                side = 1; 
            }
           
        }
        
        if(side == 0)
            prev_node->right = CreateNode(val);
        
        else if(side == 1)
            prev_node->left = CreateNode(val);    
    }
    
    return root;
}
