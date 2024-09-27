#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001],t[1001];
    scanf("%s %s",&s,&t);
    int stS=strlen(s);
    int stT=strlen(t);
    printf("%d %d\n",stS,stT);
    printf("%s %s\n",s,t);
   

    return 0;


}