#include<stdio.h>
int main()
{
    int size,i,j,k,tot,count;
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&tot,&count);
    int tempsum=0,result=0,elementcount=0;
    for(j=0;j<size;j++)
    {
        for(i=j,k=1;i<size && k<=count;i++,k++)
        {
            tempsum += arr[i];
            if(tempsum == tot && k==count)
            {
                result++;
                tempsum=0;
            }
            if(k==count)
            {
                tempsum=0;
            }
        }
    }
    printf("%d",result);
    return 0;
}
