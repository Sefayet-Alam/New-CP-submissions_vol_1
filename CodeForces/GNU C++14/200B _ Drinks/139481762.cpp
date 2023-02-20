#include<stdio.h>
#include<string.h>
 
 
int main()
{
    int i,n;
   float x=0.000;
    float s[100000];
   scanf("%d",&n);
   for (i=0;i<n;i++)
   {
       scanf("%f",&s[i]);
 
   }
    for (i=0;i<n;i++)
   {
      x=x+s[i];
 
   }
    printf("%.13f",(x)/(n));
    return 0;
 
}