#include <stdio.h>
#include <math.h>
void main()
{
    unsigned long n,i,dem=1,m;
    unsigned long a[50];
    scanf("%d",&n);
    m=n;
    while(m>0)
    {
        a[dem-1]= m%10;
        m= m/10;
        dem++;
    }

    printf("Chu so dau tien cua %d la:  %d",n,a[dem-2]);


}

