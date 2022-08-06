#include "header.h"

/*Function definition*/
void swap(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void sort(int *ptr, int size)
{
    for(int times=0; times<size; times++)
    {
        for(int iterations =0; iterations < size-1; iterations++)
        {
            if(*(ptr+iterations) >= *(ptr+(iterations+1)) )
            {
                swap(ptr+iterations, ptr+(iterations+1));
            }
        
        }
    }
}

