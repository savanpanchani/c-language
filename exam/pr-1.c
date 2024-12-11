#include <stdio.h>
	
void main() 
{
	char name[50];
	char desig[50];
	FILE *fp;
	
    int i;
	fp = fopen("data.txt", "w");
	
	if (fp!='\0')
	{
		printf("Enter employe name =");
		scanf("%s",&name);
		printf("Enter employe des =");
		scanf("%s",&desig);
		fprintf(fp, "Enter employe name = %s\n",name);
		fprintf(fp, "Enter employe des =%s\n",desig);
		
		printf("Enter employe name =");
		scanf("%s",&name);
		printf("Enter employe des =");
		scanf("%s",&desig);
		fprintf(fp, "Enter employe name =%s\n",name);
		fprintf(fp, "Enter employe des =%s\n",desig);
		
		printf("Enter employe name =");
		scanf("%s",&name);
		printf("Enter employe des =");
		scanf("%s",&desig);
		fprintf(fp, "Enter employe name =%s\n",name);
		fprintf(fp, "Enter employe des =%s\n",desig);
	
	fclose(fp);
	}
	else
	{
	printf("File is not open...!!!!!");
	}

}