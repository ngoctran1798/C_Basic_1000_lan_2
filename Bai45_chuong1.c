
#include <stdio.h>
#include <math.h>
void main()
{
    unsigned long n,s=1,i,dem=1,m;
    unsigned long a[50];
    scanf("%d",&n);
    m=n;
    while(m>0)
    {
        a[dem-1]= m%10;
        m= m/10;
        dem++;
    }

    for(i=0;i<dem-1;i++)
    {
        s*=a[i];
    }
    printf("Tich cac chu so cua %d la: s = %d",n,s);


}


