///A
#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",a+b);
}
///B
#include<stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    printf("%d\n",x*x*x);
}
///C
#include<stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    if(m<n){
        printf("No\n");
    }
    else printf("Yes\n");
}

///D
#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b+c>=22){
        printf("bust\n");
    }
    else{
         printf("win\n");
    }
}

///E
#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
   if((a==1 && b==3 ) || (b==1 && a==3)) printf("2\n");
   else  if((a==2 && b==3 ) || (b==2 && a==3)) printf("1\n");
   else  printf("3\n");
}
//F
#include<stdio.h>

int main(){
    int a,p;
    scanf("%d %d %d",&a,&p);
   int pies=a*3+p;
   printf("%d\n",pies/2);
}
///F
#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b+c>=22){
        printf("bust\n");
    }
    else{
         printf("win\n");
    }
}
#include<stdio.h>
///G
int main(){
    int s;
    scanf("%d",&s);
   int h=s/3600;
   int rem1=s%3600;
   int min=(rem1)/60;
   int rem2=rem1%60;
   int sec=rem2;
   printf("%d:%d:%d\n",h,min,sec);

}
///H
#include<stdio.h>
#include<math.h>

int main(){
    double a,pi,area,cir;
    scanf("%lf",&a);
    pi=acos(-1);
    area=pi*a*a;
    cir=2*pi*a;
    printf("%0.6lf %0.6lf\n",area,cir);

}

///I
#include<stdio.h>
#include<math.h>

int main(){
   //long long 
   int x1,x2,x3,x4,a,b,c;
    scanf("%d %d %d %d",&x1,&x2,&x3,&x4);
    if(x1>=x2 && x1>=x3&&x1>=x4)
    {
        c=x1-x4;
        b=x1-x3;
        a=x1-x2;
    }
   else  if(x2>=x1 && x2>=x3&&x2>=x4)
    {
        c=x2-x1;
        b=x2-x3;
        a=x2-x4;
    }
   else if(x3>=x2 && x3>=x1&&x3>=x4)
    {
        a=x3-x2;
        b=x3-x4;
        c=x3-x1;
    }
   else  if(x4>=x1 && x4>=x3&&x4>=x2)
    {
        a=x4-x2;
        b=x4-x3;
        c=x4-x1;
    }
printf("%d %d %d\n",a,b,c);

}
///j

////K


#include<stdio.h>
#include<math.h>

int main(){
    int w,h,x,y,r;
   scanf("%d %d %d %d %d",&w,&h,&x,&y,&r);
   if(0<=(x-r) && (x+r)<=w && 0<=(y-r) && (y+r)<=h){
    printf("Yes\n");
   }
 else{
    printf("No\n");
 }

    return 0;

}
///M
#include<stdio.h>
#include<math.h>

int main(){
     long long int n;
  scanf("%d",&n);
    if(n%2==0 && n!=2)
        printf("YES\n");
    else  printf("NO\n");

}
///N
#include<stdio.h>
#include<math.h>

int main(){
    
    int x,s;
	scanf("%d",&x);
	s=x/5;
	if(x%5==0)
	printf("%d",s);
	if(x%5!=0){
		s=(x/5)+1;
		printf("%d",s);}
	

}