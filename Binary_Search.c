
/*
Binary search, i.e

We basically ignore half of the elements just after one comparison.

Compare x with the middle element.
If x matches with middle element, we return the mid index.
Else If x is greater than the mid element, then x can only lie in right half subarray after the mid element. So we recur for right half.
Else (x is smaller) recur for the left half.

*/

#include <stdio.h>

int arr[] = {10, 20, 30, 60, 80};
int binarySearch(int l, int r, int x);


int main()
{
    int search, res, last_index;
    
    printf("Value to search: ");
    scanf("%d", &search);
    
    last_index = sizeof(arr)/sizeof(int)-1;
    res = binarySearch(0, last_index, search);
    
    if(res != -1)
    {
        printf("Element %d is present at index %d\n", search, res);
    }
    
    else
    {
        printf("Element not found!!");
    }
    
    return 0;
}

int binarySearch(int l, int h, int x) 
{ 
   if (h >= l) 
   { 
        int mid = l + (h - l)/2; 
  
        // If the element is present at the middle  
        // itself 
        if (arr[mid] == x)   
            return mid; 
  
        // If element is smaller than mid, then  
        // it can only be present in left subarray 
        if (arr[mid] > x)  
            return binarySearch( l, mid-1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return binarySearch( mid+1, h, x); 
   } 
  
   // We reach here when element is not  
   // present in array 
   return -1; 
} 
