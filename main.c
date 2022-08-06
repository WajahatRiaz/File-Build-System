#include "header.h"

int main ()
{
    int *ptr=NULL; /* Pointer to address the chunk of memory.*/
    int n; /*Number of elements in the array.*/
    puts("Enter number of elements in array:");
    scanf("%d",&n);
    /*Creating dynamically allocated array.*/
    ptr=(int *) malloc(sizeof(int)*n);

    /*Checking if the memory allocaion passed or failed. */
    assert(ptr!=NULL);

    puts("The randomized array is:");

    for(int iterations=0; iterations <n; iterations++)
    {
        *(ptr + iterations)=rand()%10;
        printf("%d\n", *(ptr + iterations));
    }

    puts("After sorting:");

    sort(ptr, n);
    
    for(int iterations=0; iterations <n; iterations++)
    {
       
        printf("%d\n", *(ptr + iterations));
    }
    free(ptr);

    return EXIT_SUCCESS;
}


