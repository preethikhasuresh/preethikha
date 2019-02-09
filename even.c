#include <stdio.h>

int main()
{
    char n;
    int i,c=0;
    scanf("%c",&n);
    for(i=48;i<=57;i++)
    {   if(n==i)
    {
        c=1;
        break;
    }
    }
    if(c==1)
    {
    if(n%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }}
    else
    {
        printf("invalid");
    }
    

    return 0;
}
