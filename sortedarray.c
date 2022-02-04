#include <stdio.h>

void main()
{

    int n,k,l;
    printf("\nEnter the size of first array ");
    scanf("%d",&n);
    printf("\nEnter the size of second array ");
    scanf("%d",&k);
    l=n+k;
    int a[n],b[k],c[l];
    printf("\nEnter the sorted array elements");
    for(int i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
       c[i]=a[i];
    }
    int x=n;
    printf("\nEnter the sorted array elements");
    for(int i=0;i<x;i++)
    {
        scanf("%d",&b[i]);
        c[k]=b[i];
        k++;
    }
    printf("\nThe merged array..\n");
    for(int i=0;i<l;i++)
    printf("%d ",c[i]);

    printf("\nAfter sorting...\n");
    for(int i=0;i<l;i++)
    {
        int temp;
        for(int j=i+1; j<l ;j++)
        {
            if(c[i]<c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }

    for(int i=0 ; i<l ; i++)
    {
        printf(" %d ",c[i]);
    }

}
