#include <stdio.h>
struct date {
    int d : 5;
    int m : 4;  
    int y;
};
  
int main()
{
    printf("Size of date is %lu bytes\n",sizeof(struct date));
    struct date dt = {31, 12, 2014};
    printf("Date is %d/%d/%d", dt.d, dt.m, dt.y);
    return 0;
}
