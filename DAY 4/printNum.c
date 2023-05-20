#include<stdio.h>
int main()
{
int n=1;
lbl1:
    printf("%d ",n);
    n++;
 if(n<=10)
 {
    goto lbl1;
 }
}