#include<stdio.h>
#include<string.h>
 
int main()
{
    char s[1000000],h[10000];
    int l;
    scanf("%d",&l);
    scanf("%s",&s);
    int i,j,k,o;
    int x=l;
    for(i=0; i<l; i++)
    {
        if (s[i]>='A' && s[i]<='Z') {s[i]=s[i]+32;}
    }
  
 
    for(i=0; i<l; i++)
    {
        for(j=i+1; j<l; j++)
        {
            /* If any duplicate found */
            if(s[i] == s[j])
            {
                /* Delete the current duplicate element */
                for(k=j; k < l - 1; k++)
                {
                    s[k] = s[k + 1];
                }
 
                /* Decrement size after removing duplicate element */
                l--;
 
                /* If shifting of elements occur then don't increment j */
                j--;
            }
        }
    }
 
    for(i=0; i<l; i++)
    {
         h[i]=s[i];
    }
    int f=0;
    o=strlen(h);
 
 
    if (o==26) {printf("YES");}
    else printf("NO");
 
}