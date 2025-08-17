#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n,i,j,count=0,temp;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //sort the array
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
       // printf("%d",arr[i]);//to check the sorting process
    }
    i=0;
    while(i<n-1)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
            i += 2;//to skip the repeating pair of numbers
        }
        else 
        {
            i++;
        }
        
    }
    printf("%d",count);
    
    return 0;
}
