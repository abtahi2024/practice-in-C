#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a=='z') 
    {
        printf("a");
    }
    else if(a>='a' && a<='z')
    {
        int ans=a+1;
        printf("%c",ans);

    }
    return 0;
}