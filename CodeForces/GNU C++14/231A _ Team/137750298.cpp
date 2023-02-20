#include<stdio.h>
 
main()
{
    int i=0,n,a,b,c,r=0;
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%d %d %d",&a,&b,&c);
        i++;
        if (a+b+c>=2){r=r+1;}
    }
    {printf("%d",r);}
    return 0;
}