#include <stdio.h>

int main() 
{
	
    int size;
    int i;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    

    int a[size];


    printf("Enter %d Elements The Array:\n", size);
    
    for(i=0; i<size; i++)
        scanf("%d", &a[i]);


    printf("Negative Elements In The Array:\t");
    
    for(i=0; i<size; i++) 
	{
       if(a[i] < 0)
       	printf("%d ", a[i]);
    }

}