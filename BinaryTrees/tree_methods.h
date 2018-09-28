#ifndef METHODS_FILE
#define METHODS_FILE

typedef struct node
{
    int data;
    int rep;
    struct node *left;
    struct node *right;
}tnode;


void print_option(tnode* root);
tnode *free_option(tnode* root);


tnode* CreateNode(int val);  
tnode* insertNode(tnode* root, int val);
void   PrintTree(tnode* root);
tnode* deleteNode(tnode* root, int val);
tnode* freeAlTree(tnode* root);

#endif
