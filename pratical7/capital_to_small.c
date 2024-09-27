#include<stdio.h>
char capital_to_small(char x)
{
    char a;
    a=x+32;
    return a;
}
int main()
{
    char d;
    scanf("%c",&d);
    char a=capital_to_small(d);
    printf("%c\n",a);

    return 0;

}