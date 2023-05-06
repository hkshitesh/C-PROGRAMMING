#include<stdio.h>
union un
{
    int a;
    int b[10];
    int c;
};
struct st
{
    int a;
    int b[10];
    int c;
};
int  main()
{
    union un u1;
    struct st s1;
    
    printf("size of Union is: %d",sizeof(u1));
    printf("size of Struct is: %d",sizeof(s1));
    printf("size of Union is: %d",sizeof(u1.b));
    printf("size of Union is: %d",sizeof(u1.a));
    printf("size of Union is: %d",sizeof(u1.c));
    return 0;
}


