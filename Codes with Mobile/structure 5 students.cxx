#include<stdio.h>
struct student
{
    char name[20];
    int age; 
    int roll;
    char address [20];
    float mark[5];
    float avg;
};
void main()
{
    int i,j,mark=0,total=0;
    struct student s[5];
    for(i=0; i<5; i++)
    {
        printf("enter name,age,roll,address");
        scanf("%s%d%d,%s",s[i].name,&s[i].age,&s[i].roll,s[i].address);
        printf("enter marks of 5 subject");
        for(j=0; j<5; j++)
        {
            scanf("%f",&s[i].mark[j]);
        {
            total+=s[i].mark[j];
            s[i].avg=total/5;
        }}}
        for(i=0; i<5; i++)
        {
            printf("entered name : %s\n",s[i].name);
            printf("age : %d\n",s[i].age);
            printf("roll : %d\n",s[i].roll);
            printf("address : %s\n",s[i].address);
            printf("marks :\n");
            for(j=0; j<5; j++)
            {
                printf("%.2f",s[i].mark[j]);
                
            }
            printf("avg : %.2f",s[i].avg);
            }}