#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d", &n);

int arr[n];
for(i=0;i<n;i++)
{
    scanf("%d", &arr[i]);
}
int freq_arr[99];
for(i=0;i<100;i++)
{
    freq_arr[i]=0;
}
int temp;
for(i=0;i<n;i++)
{
    temp = arr[i];
    freq_arr[temp]++;
}
for(i=0;i<100;i++)
{
    
    printf("%d ",freq_arr[i]);
}
return 0;
}
