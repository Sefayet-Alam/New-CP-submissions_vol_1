#include<stdio.h>
#include<string.h>
 
 
int main()
{
    int i,n;
    scanf("%d",&n);
   for (i=1;i<=n;i++)
   {
       if(i==n && (i%2==1 || i==1))  printf("I hate it");
        else if(i==n && i%2==0 ) printf("I love it");
       else{
 
 
        if(i%2==1) printf("I hate that ");
        if(i%2==0) printf("I love that ");
       }
 
   }
   return 0;
 
}