#include <stdio.h>
#include <math.h>
void main()
{
    unsigned long n,dem=1,m;
    int min,i;
    unsigned long a[10];
    scanf("%d",&n);
    m=n;
    while(m>0)
    {
        a[dem-1]= m%10;
        m= m/10;
        dem++;
    }
    min = a[0];
    for(i=1;i<dem-1;i++)
    {
        if(min>a[i]) min = a[i];
    }

    printf("Chu so be nhat cua %d la:  %d",n,min);


}
