#include <stdio.h>

typedef struct student
{
    char name[50];
    int roll;
    float marks;
    
} s;


int main()
{
    int i;
    int n;
    s student_array[2];
    
    printf("\n----------------Insert the values----------------\n");
    
    n = sizeof(student_array) / sizeof(student_array[0]);
    
    for(i=0; i<n; i++)
    {
        printf("\n-----Student %d-----\n", i+1);
        printf("Insert the name: ");
        scanf("%s", student_array[i].name);
        printf("Insert the roll: ");
        scanf("%d", &student_array[i].roll);
        printf("Insert the marks: ");
        scanf("%f", &student_array[i].marks);
    }
    
    
    printf("\n----------------Print the values----------------\n");
    
    for(i=0; i<n; i++)
    {
        printf("\n-----Student %d-----\n", i+1);
        printf("Name: %s\n", student_array[i].name);
        printf("Roll: %d\n", student_array[i].roll);
        printf("Marks: %.3f\n", student_array[i].marks);
    }
   
   
    return 0;
}
