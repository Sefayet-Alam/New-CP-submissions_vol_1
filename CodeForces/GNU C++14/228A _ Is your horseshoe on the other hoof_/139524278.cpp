#include<stdio.h>
#include<string.h>
 
 
int main()
{
    int i,j,s[1000];
    int x=1,y=1;
   for (i=0;i<4;i++)
   {
       scanf("%d",&s[i]);
    }
    int a,b,c,d;
    a=s[0];
    b=s[1];
    c=s[2];
    d=s[3];
 
     if ( (a==b) &&(b==c)&&(c==d) ) { printf("3");}
 
    else if ( ((a==b) && (b==c)) || ((a==b)&& (b==d)) || ((a==c)&&(c==d))||((b==c)&&(c==d))) {  printf("2"); }
 
    else if (((a==b)&&(c==d)) || (( a==c)&&( b==d))||((a==d)&&b==c)) { printf("2"); }
 
    else if( ( a==b) || (a==c) ||( a==d)||(b==c) ||(b==d)||(c==d)) { printf("1");}
    
    else {printf("0");}
 
 
   return 0;
 
}