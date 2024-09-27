#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int t=0;t<n;t++)
    {
        char S[100],T[100];
        scanf("%s",S,T);
        int lenS=strlen(S);
        int lenT=strlen(T);
        int maxlen;
        //  int maxlen = (lenS > lenT) ? lenS : lenT;
        if(lenS>lenT)
        {
            maxlen=lenS;
        }
        else
        {
            maxlen=lenT;
        }
        for(int i=0;i<maxlen;i++)
        {
            if(i<lenS)
            {
                printf("%c",S[i]);
            }
            if(i<lenT)
            {
                printf("%c",S[i]);
            }
        }

        printf("\n");



    }


    return 0;
}