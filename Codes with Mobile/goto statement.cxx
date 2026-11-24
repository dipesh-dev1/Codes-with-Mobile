#include<stdio.h>
int main()
{
	int age;
	printf("enter age:-");
	scanf("%d",&age);
	if(age>16)
	goto gym;
	else
	goto school;
	gym:
	printf("GOto Gym");
	return 0;
	school:
	printf("GOto School");
	return 0;
}