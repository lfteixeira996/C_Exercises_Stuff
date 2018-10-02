#include <stdio.h>

typedef struct node
{
    int val;
    struct node *next;
}node_t;


/*Create node*/
node_t* create_node(int data)
{
    node_t* root = malloc(sizeof(node_t));
    root->val = data;
    root->next = NULL;
    
    return root;
}

/*Insert node*/
node_t* push(node_t *root, int data)
{
    node_t *cursor = root;
    
    if(root == NULL)
    {
        root = create_node(data);
        return root;
    }
    

    while(cursor->next != NULL)
    {
        cursor = cursor->next;
    }
        
    cursor->next = create_node(data);
    
    
    return root;
}

/*Remove last node*/
node_t* pop(node_t *root)
{
    node_t *cursor = root;
    node_t *prev = root;
    
    if(root == NULL)
    {
        printf("Nothing to Remove!\n");
        return root;
    }
    

    while(cursor->next != NULL)
    {
        prev = cursor;
        cursor = cursor->next;
    }
        
    prev->next = NULL;    
    printf("Node %2d Removed!\n", cursor->val);
    free(cursor);
    
    
    
    return root;
}

/*Print node*/
void print_node(node_t *node_to_print)
{
    if(node_to_print == NULL)
    {
        printf("\n");
        return;
    }
    
    else
    {
        printf("Node: %d\n", node_to_print->val); 
        print_node(node_to_print->next);
    }
}


int main()
{
    node_t *root = NULL;
    int op, val;
    
    do
    {
        printf("-----------------------\n");
        printf("Linked List\n");
        printf("\t 1 - Push a value\n");
        printf("\t 2 - Pop a value\n");
        printf("\t 3 - Print List\n");
        printf("\t 0 - Exit\n");
        
        printf("\n");
        scanf("%d", &op);
        
        switch(op)
        {
            case 1: 
            {
                printf("Value to push: ");
                scanf("%d", &val);
                root = push(root, val);
                break;
            }
            
            case 2: 
            {
                root = pop(root);
                break;
            }
            
            case 3: 
            {
                print_node(root);
                break;
            }
            
            case 0: 
            {
                printf("Exit!");
                break;
            }
            
            default: printf("Wrong option!");
        }
    
    }
    while(op != 0);
    
    return 0;
}

