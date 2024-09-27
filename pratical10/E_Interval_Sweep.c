#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
  
    if(a>0 && b>0)
    {
        printf("YES\n");
    }
      if(a%2==1 && b%2==0)
    {
        printf("YES\n");
        // return 0;
    }
    else
    {
        printf("NO\n");
    }
    return 0;

}
