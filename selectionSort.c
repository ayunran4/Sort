#include <stdio.h>
#include <stdlib.h>

void selectionSort(int* arr,int n)
{
    int i,j,k,tmp,min,mIdx;

    for (i=0; i<n; i++)
    {
        min=arr[i];
        mIdx=i;
        for (j=i+1; j<n; j++)
        {
            if (min > arr[j])
            {
                min=arr[j];
                mIdx=j;
            }
        }
        tmp=arr[i];
        arr[i]=min;
        arr[mIdx]=tmp;

        for (k=0; k<n; k++)  // Check process
            printf("%d ",arr[k]);
        printf("\n");
    }

    printf("\n");
    for (i=0;i<n;i++)
        printf("%d ",arr[i]);
}
int main()
{
    int n,i;
    int* arr;

    printf("How many number? :: ");
    scanf("%d",&n);
    printf("Insert number ::");

    arr = (int*)malloc(sizeof(int)*n);
    for (i=0;i<n;i++)
        scanf("%d",&arr[i]);

    selectionSort(arr,n);

    return 0;
}
