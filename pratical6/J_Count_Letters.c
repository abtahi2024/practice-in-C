#include<stdio.h>
#include<string.h>
int main()
{
    char a;
    int cnt[26]={0};
    while(scanf("%c",&a)!=EOF)
    {
       cnt[a-'a']++;
    }
    // if(a<'a' && a<='z')
    for(int i=0;i<26;i++)
    {
        char v='a'+i;
        if(cnt[i])
        {
            printf("%c : %d\n",v,cnt[i]);
        }
    }
    
  
    return 0;
}