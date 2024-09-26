#include<stdio.h>

main(){

	int GS,HRA,TA,DA,BS;

	printf("Enter Your Base Salary = ");
	scanf("%d",&BS);
	printf("Enter HRA Percentage = ");
	scanf("%d",&HRA);
	printf("Enter TA Percantage = ");
	scanf("%d",&TA);
	printf("Enter DA Percantage = ");
	scanf("%d",&DA);

	HRA=BS*HRA/100;
	TA=BS*TA/100;	
	DA=BS*DA/100;

	GS=BS+HRA+TA+DA;

	printf("Your Gross Salary Is = %d",GS);

}