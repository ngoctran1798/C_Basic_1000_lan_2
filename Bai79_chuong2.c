#include <stdio.h>
void main()
{
    unsigned long n;
    int dem;
    scanf("%d",&n);
    dem = demso(n);
    printf("%d co so luong chu so la: %d",n,dem);

}

int demso(long n)
{
    int dem=1,i=10;
    while(n/i>=1)
    {
        i*=10;
        dem++;
    }
    return dem;
}
