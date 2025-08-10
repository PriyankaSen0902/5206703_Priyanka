#include<stdio.h>
#include<string.h>
int main()
{
    int n,q,i,j;
    scanf("%d",&n);
    char str[n][21];
    for(i=0;i<n;i++)
    {
        scanf("%s",str[i]);
    }
    scanf("%d",&q);
    char que[q][21];
    for(i=0;i<q;i++)
    {
        scanf("%s",que[i]);
    }
    for(i=0;i<q;i++)
    {
        int count=0;
        for(j=0;j<n;j++)
        {
           if(strcmp(que[i],str[j])==0)
           {
            count++;
           } 
        }
        printf("%d\n",count);
    }
    return 0;
}
