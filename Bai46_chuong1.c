#include <stdio.h>
#include <math.h>
void main()
{
    unsigned long n,s=0,i,dem=1,m;
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
        if(a[i]%2!=0) s++;
    }
    printf("So luong chu so le cua %d la: s = %d",n,s);


}

