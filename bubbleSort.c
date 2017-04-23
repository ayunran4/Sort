#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int* arr,int n)
{
    int i, j, tmp;

    for (i=0; i<n; i++)
    {
        for (j=0; j<n-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
        for (j=0; j<n; j++) // Check process
            printf("%d ",arr[j]);
        printf("\n");
    }

    printf("\n");
    for (i=0; i<n; i++)
        printf("%d ", arr[i]);
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

    bubbleSort(arr,n);

    return 0;
}
