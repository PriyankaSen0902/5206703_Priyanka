#include<stdio.h>
void getarray(int q,int* n,int* k);
void sort(int*,int*,int);
void twoArrays(int k, int n,int arr_a[n],int arr_b[n]);
int main()
{
    int q,n,k;
    scanf("%d",&q);
    getarray(q,&n,&k);
    return 0;
}
void getarray(int q, int* n,int* k)
{
    for(int i=0;i<q;i++)
    {
        scanf("%d %d",n,k);
        int arr_a[*n];
        int arr_b[*n];
        for(int j=0;j<*n;j++)
        {
            scanf("%d",&arr_a[j]);
        }
        for(int j=0;j<*n;j++)
        {
            scanf("%d",&arr_b[j]);
        }
        sort(&arr_a[0], &arr_b[0],*n);
        twoArrays(*k, *n, arr_a, arr_b);
    }
}
void sort(int* arr_a, int* arr_b, int size)
{
    int temp;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(arr_a[j]>arr_a[j+1])
            {
                temp = arr_a[j];
                arr_a[j]=arr_a[j+1];
                arr_a[j+1]=temp;
            }
            if(arr_b[j]<arr_b[j+1])
            {
                temp = arr_b[j];
                arr_b[j]=arr_b[j+1];
                arr_b[j+1]=temp;
            }
        }
    }
}
void twoArrays(int k,int n,int arr_a[n],int arr_b[n])
{
    int flag=1;
    for(int i=0;i<n;i++)
    {
        if(arr_a[i]+arr_b[i] < k)
        {
            flag=0;
            break;
        }
    }
    if(flag)
    printf("YES\n");
    else
    printf("NO\n");
}
