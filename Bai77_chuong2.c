#include <stdio.h>
int tong(int n);
void main()
{
    int n,s;
    scanf("%d",&n);
    s = tong(n);
    printf("\nS(n)= %d",s);
}

int tong(int n)
{
    int i,s=0;
    for(i=1;i<=n;i++)
    s+=i;
}
