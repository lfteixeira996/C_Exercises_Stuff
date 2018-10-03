
/*
Linear search, i.e

Start from the leftmost element of arr[] and one by one compare x with each element of arr[]
If x matches with an element, return the index.
If x doesn’t match with any of elements, return -1.

*/

#include <stdio.h>

int arr[] = {10, 20, 80, 30, 60, 50, 110, 100, 130, 170};
int linear_search(int search);


int main()
{
    int search, index;
    
    printf("Value to search: ");
    scanf("%d", &search);
    
    index = linear_search(search);
    
    if(index != -1)
    {
        printf("Element %d is present at index %d\n", search, index);
    }
    
    else
    {
        printf("Element not found!!");
    }
    
    return 0;
}

int linear_search(int search)
{
    int i;
    
    for (i=0; i<sizeof(arr)/sizeof(int); i++) {
        
        if(arr[i] == search)
        {
            return i;
        }
    }
    
    return -1;
}
