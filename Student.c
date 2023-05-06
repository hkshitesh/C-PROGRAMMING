#include<stdio.h>
int main()
{
    char name[2][10];
    char d;
    int roll[2];
    int marks[2];
    int i=0;
    //This loop is used to get input from user
    for (i=0;i<3;i++)
    {
        printf("Enter Name rollNo and Marks %d",i+1);
        scanf("%s,%d,%d",&name[i],&roll[i],&marks[i]);
        scanf("%c",&d);
    }
    //This loop is used to print the stored values
    for (i=0;i<3;i++)
    {
        printf("Entered Name rollNo and Marks");
        printf("%s,%d,%d",name[i],roll[i],marks[i]);
        printf("\n");
    }   
    
    return 0;
}
