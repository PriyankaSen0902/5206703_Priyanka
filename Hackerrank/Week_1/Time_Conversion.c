#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    scanf("%s",str);
    int i;
    int temp1,temp2,temp3;
    if(str[8]== 'P' && str[0]=='1' && str[1]=='2')
    goto skip;
    else if(str[8]=='A' && str[0]=='1' && str[1]=='2')
    {
        str[0]='0';
        str[1]='0';
    }
    if(str[8]=='P')
    {
        temp1=str[0] - '0';
        temp2=str[1] - '0';
        temp3=(temp1*10) + temp2 + 12;
        
        str[0]=temp3/10 + '0';
        str[1]=temp3%10 + '0';
    }
    skip:
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]== 'P' || str[i]== 'A')
        {
            break;
        }
        printf("%c",str[i]);
    }
    return 0;
}
