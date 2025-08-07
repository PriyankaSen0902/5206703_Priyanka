#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,i,j,leftsum=0,rightsum=0,abs_diff=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                leftsum += a[i][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        rightsum += a[i][n-1-i];
    }
    if(leftsum > rightsum)
    {
        abs_diff = leftsum - rightsum;
    }
    else 
    {
        abs_diff = rightsum - leftsum;
    }
    printf("%d",abs_diff);
    return 0;
    
}
