#include<stdio.h>

void insertionSort(int a[], int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && temp<=a[j])
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
}

int main()
{
    int a[]= {15,2,9,3,7,4,1,12,16};
    int i=0;
    int n = sizeof(a)/sizeof(a[0]);
    printf("Array before Insertion sorting \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    insertionSort(a,n);
    
    printf("\nArray After Insertion sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}