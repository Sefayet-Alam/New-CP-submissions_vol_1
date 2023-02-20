#include<stdio.h>
#include<string.h>
 
int main()
{
    int a[10000],b[10000];
    int i,j,n,x=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j]) {x++;}
        }
    }
    printf("%d",x);
    return 0;
}