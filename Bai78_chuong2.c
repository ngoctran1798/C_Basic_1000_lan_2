#include <stdio.h>

void main()
{
    int n,s;
    scanf("%d",&n);
    printf("\nCac uoc so cua %d la:",n);
    uocso(n);
}

void uocso(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0) printf("%d  ",i);
    }
}
