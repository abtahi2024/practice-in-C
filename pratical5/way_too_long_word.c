#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int x=0;x<t;x++)
    {
        char a[101];
    scanf("%s",&a);
    int len=strlen(a);
    // for(int i=0;a[i]!='\0';i++)
    if(len>10)
    {
        printf("%c%d%c\n",a[0],len-2,a[len-1]);
    }
    else
    {
        printf("%s\n",a);
    }
    }



   return 0;

    }
    