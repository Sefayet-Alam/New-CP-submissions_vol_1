#include<stdio.h>
#include<math.h>
 
int main()
{
    int i,k,l,m,n,d,x=0,r,y,z;
    scanf("%d\n%d\n%d\n%d\n%d",&k,&l,&m,&n,&d);
    y=k<l?k:l;
    z=m<n?m:n;
    r=y<z?y:z;
    for (i=r;i<=d;i++)
    {
        if (i%k==0 ||i%l==0 || i%m==0 || i%n==0) x++;
    }
    printf("%d",x);
    return 0;
}