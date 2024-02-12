#include <stdio.h>
void main()
{
    int n,s=0,r=0,d;
    printf("Enter a number \n");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        s=s+d;
        r=r*10+d;
        n=n/10;
    }
    printf("reverse is %d and sum is %d",r,s);
}

