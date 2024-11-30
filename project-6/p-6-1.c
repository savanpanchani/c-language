#include<stdio.h>
#include<string.h>

main()
{
	char str[20] , rev[20];
	int Palindrome = 1 , length = 0;
	
	 printf("Enter A String:");
     scanf("%s", str);
     
   	int i;

    for (i=0; str[i] !='\0';i++) 
	{
        length++;
    }
    
    for (i=0;i<length;i++)
    {
    	rev[i]=str[length-i-1];
	}
	rev[length]='\0';
	
	for (i=0;i<length;i++)
	{
	    if (str[i] != rev[i]) 
		{
            Palindrome = 0;
        }
    }
       if(Palindrome)
	     {
            printf("The String Is Palindrome\n");
         } 
       else 
       	{
        printf("The String Is Not Palindrome\n");
    }
}