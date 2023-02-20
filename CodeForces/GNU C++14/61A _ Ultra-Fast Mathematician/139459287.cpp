#include<stdio.h>
#include<string.h>
 
 
int main()
{
    char s[100000],r[1000000];
    int m[1000000];
 
    scanf("%s",&s);
    scanf("%s",&r);
    int i,l=strlen(s);
    for (i=0;i<l;i++)
    {
        if (s[i]=='0' && r[i]=='0') m[i]=0;
        if (s[i]=='1' && r[i]=='0') m[i]=1;
        if (s[i]=='0' && r[i]=='1') m[i]=1;
        if (s[i]=='1' && r[i]=='1') m[i]=0;
    }
   for (i=0;i<l;i++)
    {
        printf("%d",m[i]);
    }
}