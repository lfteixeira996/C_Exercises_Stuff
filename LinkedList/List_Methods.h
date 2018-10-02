#ifndef LIST_METHODS
#define LIST_METHODS


typedef struct node
{
    int val;
    struct node *next;
}node_t;

node_t* create_node(int data);
node_t* push(node_t *root, int data);
node_t* pop(node_t *root);
void print_node(node_t *node_to_print);

#endif
