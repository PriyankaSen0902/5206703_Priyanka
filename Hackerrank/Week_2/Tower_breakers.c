#include<stdio.h>

int towerBreakers(int n, int m)
{
    if(m==1)return 2;
    if(n%2==0)return 2;
    return 1;
}

int main(void)
{
    int t;
    if(scanf("%d",&t)!=1)return 0;
    while(t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        printf("%d\n",towerBreakers(n,m));
    }
}
