#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int t=0;t<T;t++)
    {
        int n;
        scanf("%d",&n);
        char c[n];
        scanf("%s",&c);
        int Tiger=0;
        int Pathaan=0;
        for(int i=0;i<n;i++)
        {
            if(c[i]=='T')
            {
                Tiger++;
            }
            else if(c[i]=='P')
            {
                Pathaan++;
            }
        }
        if(Tiger>Pathaan)
        {
            printf("Tiger\n");
        }
        else if(Pathaan>Tiger)
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Draw\n");
        }

       }
   
    
     return 0;
}    