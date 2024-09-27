#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int m1,m2,d;
        scanf("%d %d %d",&m1,&m2,&d);
        int ori_time=m1*d;
        int new_time=(m1*d)/(m1+m2);
        int few_time=d-new_time;

        printf("%d\n",few_time);

    }


    return 0;
}