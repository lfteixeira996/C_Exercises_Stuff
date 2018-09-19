#include <stdio.h>

void print_table(int);

int main()
{
    int number;
    
    printf("Insert the number: ");
    scanf("%d", &number);
    
    print_table(number);
    
    return 0;

}


void print_table(int number)
{

    int i;
    
    for(i=1; i <= 10; i++)
    {
        printf("\t %d * %2d = %3d\n", number, i, number*i);
    }
    
}
