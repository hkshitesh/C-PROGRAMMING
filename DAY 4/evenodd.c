#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%2==0)
    {
        goto even;
    }  
    else
    {
        goto odd;
    }  
        printf("\nHello");
        printf("\nworld");
even:
        printf("\nEven");
        printf("\ntext1");
        printf("\ntext2");
        return 0;
odd:
        printf("\nOdd");
        printf("\ntext3");
        printf("\ntext4");   
        return 0; 
}