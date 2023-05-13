#include<stdio.h>
void binarySearch(int a[], int beg, int end, int item)
{
    int mid;
    int loc=0;
    while(beg<end)
    {
        mid=(beg+end)/2;
        if(item==a[mid])
        {
            loc=1;
            break;
        }
        if(item<a[mid])
        {
            end=mid-1;
        }
        if(item>a[mid])
        {
            beg=mid+1;
        }
    }
    if(loc==0)
    {
        printf("\nItem not present");
    }
    else
    {
        printf("\nItem present at: %d", (mid+1));
    }
}

void main()
{
    int a[]={1,3,5,11,17,19,23,24,27,28,31,35,37,43,48,49};
    int item;
    int n;
    int i;
    printf("\nEnter Element to Search: ");
    scanf("%d",&item);
    n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
    binarySearch(a,0,n-1,item);
}