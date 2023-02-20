#include<stdio.h>
#include<string.h>
 
int main()
{
   int n,a,b,c,d,e;
   scanf("%d",&n);
    int x=0;
 
    if (n>=100)  { a=n/100; x=x+a;n=n-a*100;}
    if (n>=20) { b=n/20; x=x+b; n=n-b*20;}
    if (n>=10)  { c=n/10; x=x+c; n=c*n-10;}
    if (n>=5)  { d=n/5; x=x+d; n=n-d*5;}
    if (n>=1)  { e=n; x=x+e;}
 
 
    printf("%d",x);
}