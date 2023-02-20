#include<stdio.h>
#include<string.h>
int main()
{
    char ch[102]; int a,b,t;
    scanf("%d ",&t);
while(t--)
{
 
        for(a=0;a<=100;a++)
            {
               scanf("%c",&ch[a]);
               if(ch[a]=='\n'){break;}
            }
            if( a<=10)
            {
                for(b=0;b<a;b++)
                    printf("%c",ch[b]);
            }
            else
            {
 
                printf("%c",ch[0]);
                printf("%d",a-2);
                printf("%c",ch[a-1]);
            }
            printf("\n");
 
}
 
    return 0;
}