#include <stdio.h>
#include <conio.h>

int sum(int, int);

int main()
{
    int a, b;

    printf("Insert a value: ");
    scanf("%d", &a);
    
    printf("Insert b value: ");
    scanf("%d", &b);
    
    printf("The sum of a+b = %d\n", sum(a,b));

}


int sum(int a, int b)
{
    return a+b;
}
