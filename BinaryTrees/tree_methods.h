#ifndef METHODS_FILE
#define METHODS_FILE


typedef struct node
{
    int data;
    int rep;
    struct node *left;
    struct node *right;
}tnode;


tnode *CreateNode(int val);  
tnode *CreateTree(tnode* root, int val);
void *PrintTree(tnode* root);

#endif
