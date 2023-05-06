#include<stdio.h>
struct date
{
    int d : 5;
    int m : 4;
    int y;
};
void main()
{
struct date dt = {28,2,2022};
printf("size = %d",sizeof(dt));
printf("\ndate is %d %d %d",dt.d,dt.m,dt.y);
}