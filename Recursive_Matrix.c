/*
Print a Matrix with values 
The user insert the dimensions of the Matrix

Recursive algorithm

*/


#include <stdio.h>


void print_matrix(int, int,int);

int main()
{
    //printf("Hello World");

    print_matrix(4,6,6);

    return 0;
}

void print_matrix(int row, int col, int col_id)
{
    if(row == 0)
    {
        return;
    }  
    
    if(col == 0)
    {
        printf("\n");
        print_matrix(--row, col_id, col_id );
    }
   
    else
    {   
        printf("* ");
        print_matrix(row, --col, col_id);  
    }
}
