#include<stdio.h>
#include<string.h>

main()
{
	char str[20];
	
	
	printf("Enter any String :");
	gets(str);
	
	int i,j;
	int len =strlen(str);
		
	for (i=0; i<len; i++)
	{
		int num = 1;
		
		for(int j=i+1; j<len; j++)
		{
				if(str[i]==str[j])
        	{
        		str[j]='\0';
        		num++;
			}
		}
		    if(str[i]!='\0')
			printf("%c => %d\n",str[i], num);
	}
}