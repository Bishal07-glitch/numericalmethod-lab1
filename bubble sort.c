#include<stdio.h>

void bubble_sort(int a[],int N){
int temp,i,j;
for(i=0;i<N;i++)
{
    for(j=0;j<N-i-1;j++)
    {
        if(a[j] > a[j+1])
        {
            temp = a[j];
            a[j]=a[j+1];
            a[j+1] = temp;
        }
    }
}
}
int main()
{
    int a[100],N,i;
    printf("enter the size of  array:\n");
    scanf("%d",&N);
    printf("enter the element of the given array:\n");
    for(i=0;i<N;i++)
    {
       scanf("%d",&a[i]);
    }
   bubble_sort( a,N);
    printf("\n the element in order:\n ");
     for(i=0;i<N;i++)
    {
       printf("\t %d",a[i]);
    }
    return 0;

}
