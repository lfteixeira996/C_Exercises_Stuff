
/*
Linear search, i.e

Start from the leftmost element of arr[] and one by one compare x with each element of arr[]
If x matches with an element, return the index.
If x doesn’t match with any of elements, return -1.

*/

#include <stdio.h>

int arr[] = {10, 20, 80, 30, 60};
int binary_search(int search, int low, int high);


int main()
{
    int search, index;
    
    printf("Value to search: ");
    scanf("%d", &search);
    
    index = binary_search(search, 0, sizeof(arr)/sizeof(int));
    
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

int binary_search(int s, int l, int h)
{
    int m_idx = l + (h-l)/2;
    
    if(s == arr[m_idx])
    {
        return m_idx;
    }
    
    else if(s > arr[m_idx])
    {
        return binary_search(s, m_idx, h);
    }

    else if(s < arr[m_idx])
    {
        return binary_search(s, l, m_idx);
    }

    return -1;
}
