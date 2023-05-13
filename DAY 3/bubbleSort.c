#include<stdio.h>
void bubbleSort(int a[], int n)
{
    int i,j;
    int temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

}

void main()
{
    int a[10];
    int i=0;
    printf("Enter array elements");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Actual Array is: ");
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    bubbleSort(a,10);
    printf("\n Sorted Array is: ");
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
}