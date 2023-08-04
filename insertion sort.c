#include<stdio.h>
void insertion_sort(int a[], int n)
{
    int i,j,temp;
    for (i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while ((temp<a[j]) && (j>=0))
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
}
int main()
{
    int n,i;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements you want to sort:\n");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    insertion_sort(a,n);
    printf("Sorted elements are:\n");
    for (i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}
