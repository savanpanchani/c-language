#include<stdio.h>

int main() 
{

    char a[50], * ptr;
    int count;

    printf("Enter any string: ");
    
    gets(a);
    
    ptr = &a;
    
    count = 0;
    
    while (*ptr!='\0')
	{
        count++;
        
        ptr++;
    }

    printf("\nThe length of a string : %d", count);

}