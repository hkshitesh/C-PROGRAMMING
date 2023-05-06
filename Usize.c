#include<stdio.h>
struct address
{
    int hno;
    char city[20];
};
struct stu
{
    int id;
    struct address add;
};
void main()
{
    struct stu s1;
    struct stu *s2;
    s2=&s1;
    printf("enter student record \n");
    scanf("%d %d %s",&s2->id, &s2->add.hno, s2->add.city);
    printf("%d %d %s",s2->id, s2->add.hno, s2->add.city);
}