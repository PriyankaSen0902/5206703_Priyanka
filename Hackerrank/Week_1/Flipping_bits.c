#include<stdio.h>
int main()
{
    int size,i;
    scanf("%d", &size);
    unsigned int arr[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("%u\n", ~arr[i]);
    }
    return 0;
}
