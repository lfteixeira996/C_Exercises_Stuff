#ifndef METHODS_FILE
#define METHODS_FILE

typedef struct node
{
    int data;
    int rep;
    struct node *left;
    struct node *right;
}tnode;


tnode *free_option(tnode* root);
void print_option(tnode* root);
tnode *delete_node_option(tnode* root, int val);





tnode* CreateNode(int val);  
tnode* insertNode(tnode* root, int val);
void   PrintTree(tnode* root);
tnode* deleteNode(tnode* root, int val);
tnode* freeAlTree(tnode* root);

#endif
