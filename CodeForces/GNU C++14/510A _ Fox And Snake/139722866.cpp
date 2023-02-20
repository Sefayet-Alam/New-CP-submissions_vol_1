#include<stdio.h>
#include<string.h>
 
int main()
{
    int n,m;
    char s[100000];
    scanf("%d %d",&n,&m);
    int i,j;
    for (i=1;i<=n;i++)
    {
         if(i==1)
        {
        for (j=1;j<=m;j++) {s[j]='#';}
        }
        if(i%2==0 && i%4!=0)
        {
        for (j=1;j<=m;j++) {s[j]='.';
                            s[m]='#';}
        }
        if(i%2==0 && i%4==0)
        {
        for (j=1;j<=m;j++) {s[j]='.';
                            s[1]='#';}
        }
 
        if(i%2!=0)
        {
        for (j=1;j<=m;j++) {s[j]='#';}
        }
 
        for(j=1;j<=m;j++)
        {
            printf("%c",s[j]);
        }
        printf("\n");
 
    }
    return 0;
 
}