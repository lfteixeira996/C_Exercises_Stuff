

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
    tnode *new_Node = new tnode(); 
    
    new_Node->data = val;
    new_Node->left = new_Node->right = NULL;
    
    return new_Node;
}
