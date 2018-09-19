#include <stdio.h>

int max_value(int*);

int main()
{
    int values[3];
    int* ptr = values;
    
    printf("Insert the first value: ");
    scanf("%d", &values[0]);
    printf("Insert the second value: ");
    scanf("%d", &values[1]);
    printf("Insert the third value: ");
    scanf("%d", &values[2]);
    
    
    printf("The max value is: %d\n", max_value(ptr) );
    return 0;

}


int max_value(int* arr)
{
    int i;
    int max = *arr;
    
    for(i=1; i<3; i++)
    {
        arr++;
        if( max < *arr)
        {
            max = *arr;
        }
    }
    
    return max;
}
