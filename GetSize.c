#include<stdio.h>
void main()
{
    int a;
    char b;
    float c;
    double d;
    int *p;
    char *p1;
    printf("\nInt size=%d",sizeof(a));
    printf("\nchar size=%d",sizeof(b));
    printf("\nFloat size=%d",sizeof(c));
    printf("\nDouble size=%d",sizeof(d));
    printf("\nInt Pointer size=%d",sizeof(p));
    printf("\nChar Pointer size=%d",sizeof(p1));
}