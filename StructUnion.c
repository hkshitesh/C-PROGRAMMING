#include<stdio.h>
struct Sstudent
{
    int roll;
    double marks;
};
union Ustudent
{
    int roll;
    int marks;
};
void main()
{
    struct Sstudent s1;
    union Ustudent u1;
    s1.roll=101;
    s1.marks=45.5;
    u1.roll=101;
    u1.marks=45;
    printf("Structure values %d %f\n",s1.roll,s1.marks);
    printf("Union values %d %d\n",u1.roll,u1.marks);

}
