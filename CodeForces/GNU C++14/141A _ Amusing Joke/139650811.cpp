#include<stdio.h>
#include<string.h>
 
void ascendingOrderString(char input[1000]) {
  int m, n;
  char temp;
  int stringLength = strlen(input);
  for (m = 0; m < stringLength - 1; m++) {
    for (n =m + 1; n < stringLength; n++) {
      if (input[m] > input[n]) {
        temp = input[m];
        input[m] = input[n];
        input[n] = temp;
      }
    }
  }
}
 
int main()
{
    int w,x,y,z,t;
 
    char s[1000],h[1000],r[10000],m[1000];
 
    scanf("%s",&s);
    scanf("%s",&h);
    scanf("%s",&r);
 
    w=strlen(s);
    x=strlen(h);
    y=strlen(r);
    z=w+x;
    int i,j,p;
 
    for(i=0;i<w;i++)
    {
        m[i]=s[i];
    }
    for(i=w,j=0;i<w+x,j<x;i++,j++)
    {
        m[i]=h[j];
    }
 
 
    ascendingOrderString(r);
    ascendingOrderString(m);
 
 
 
    for (i=0;i<100;i++)
    {
        if (r[i]!=m[i]) { t=1; break; }
        if (r[i]==m[i]) {  t=0;}
    }
  if (t==1) {printf("NO");}
  if (t==0) {printf("YES");}
 
 
}