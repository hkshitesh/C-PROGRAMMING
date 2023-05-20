#include<stdio.h>
int main()
{
    int i=0;
    int j=0;
    for(i=0;i<5;i++)
    {
        printf("i= %d, j= ",i);
        for(j=0;j<5;j++)
        {
            if(j==2)
            {
                continue;
            }
            printf("%d ",j);
        }
        printf("\n");
    }       
    
    return 0;
}