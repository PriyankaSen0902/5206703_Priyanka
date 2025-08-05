#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,count;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    	count = 0;
    	for(j=0;j<n;j++)
    	{
    		if(i!=j && a[i]==a[j])
    		{
    			count++;
			}
		}
		if(count==0)
		{
			printf("%d",a[i]);
			break;
		}
	}
    
    return 0;

}