#include<stdio.h>
struct student
{
    int name[10];
    int roll;
    int marks;
}stu1,stu2;
void main()
{
 //   struct student stu1,stu2;
    printf("\nEnter first student record Name,roll,marks");
    scanf("%d %d %d",stu1.name,&stu1.roll,&stu1.marks);
    printf("\nEnter Second student record Name,roll,marks");
    scanf("%d %d %d",stu2.name,&stu2.roll,&stu2.marks);
    printf("Students Records are here:\n");
    printf("%d %d %d\n",stu1.name,stu1.roll,stu1.marks);
    printf("%d %d %d\n",stu2.name,stu2.roll,stu2.marks);
    printf("Size of student 1 storage is: %d ",sizeof(stu1));
}
