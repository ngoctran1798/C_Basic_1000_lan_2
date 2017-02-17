#include <stdio.h>
void main()
{
    unsigned long n,dem=1,i=10;
    scanf("%d",&n);
    while(n/i>=1)
    {
        i*=10;
        dem++;
    }
    printf("%d co so luong chu so la: %d",n,dem);

}

