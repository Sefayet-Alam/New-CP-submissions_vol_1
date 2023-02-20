#include<stdio.h>
#include<string.h>
 
 
 
int main()
{
    int i,n,p;
    char s[300000];
    scanf("%d",&n);
    int x=0;
    char r[100];
    char a[]="Tetrahedron";
    char b[]="Cube";
    char c[]="Octahedron";
    char d[]="Dodecahedron";
    char e[]="Icosahedron";
    for (i=0;i<n;i++)
    {
        scanf("%s",&r);
        x=strcmp(a,r)==0? x+4:x;
       x=strcmp(r,b)==0? x+6:x;
       x=strcmp(r,c)==0? x+8:x;
       x=strcmp(r,d)==0? x+12:x;
       x=strcmp(r,e)==0? x+20:x;
 
    }
 
 
    printf("%d",x);
    return 0;
 
}