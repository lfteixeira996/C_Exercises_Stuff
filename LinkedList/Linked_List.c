#include <stdio.h>
#include <stdlib.h>
#include "List_Methods.h"


int main()
{
    node_t *root = NULL;
    int op, val;
    
    do
    {
        printf("-----------------------\n");
        printf(" Linked List\n");
        printf("-----------------------\n");
        printf(" 1 - Push a value\n");
        printf(" 2 - Pop a value\n");
        printf(" 3 - Print List\n");
        printf(" 4 - Search for node\n");
        printf(" 5 - Clear Screen\n");
        printf(" 0 - Exit\n");
        
        printf("\nOption: ");
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
                if(root == NULL) printf("The list is Empty!\n"); 
                
                else print_node(root);
                
                break;
            }
            
            case 4: 
            {
                printf("Value to search: ");
                scanf("%d", &val);
                search_node(root, val);
                break;
            }
            
            case 5:
            {
                system("clear");
                break;
            }
            
            case 0: 
            {
                printf("Exit!");
                break;
            }
            
                default: printf("Invalid option!\n");
        }
    
    }
    while(op != 0);
    
    return 0;
}

