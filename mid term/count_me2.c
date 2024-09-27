#include<stdio.h>
#include<string.h>
int main()
{
    char S[100005];
    scanf("%s",&S);
    // for(int i=0;i<=strlen(S);i++)
    // {
    //     scanf("%s",S[i]);
    // }
    int consonantscount=0;
    for(int i=0;S[i]!='\0';i++)
    {
        if(S[i]!='a' && S[i]!='e' && S[i]!='i' && S[i]!='o' && S[i]!='u')
        {
            consonantscount++;
        }
    }
    printf("%c",consonantscount);


    return 0;





}