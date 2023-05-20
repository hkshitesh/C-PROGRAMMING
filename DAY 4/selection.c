#include<stdio.h>
void selctionSort(int a[],int n)
{
    int i,j;
    int small;
    int temp;
    for(i=0;i<n-1;i++)
    {
        small=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[small])
            {
                small=j;
            }
        }
        temp=a[small];
        a[small]=a[i];
        a[i]=temp;
    }
}
int main()
{
    int a[]= {15,2,9,3,7,4,1,12,16};
    int i=0;
    int n = sizeof(a)/sizeof(a[0]);
    printf("Array before sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    selctionSort(a,n);
    
    printf("\nArray Afgter sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}