#include<stdio.h>
#include<math.h>

int pageCount(int n,int p)
{
    int front_count = p/2;
    int back_count = (n/2) - (p/2);
    return (front_count < back_count) ? front_count : back_count;
}
int main()
{
    int n,p;
    scanf("%d\n%d",&n,&p);
     int res = pageCount(n,p);
     printf("%d",res);
     return 0;
}
