#include <stdio.h>

int sum;
void divisorsum(int n, int i)
{
  
    if (i <= n) {
        if (n % i == 0) {
            sum+=i;
        }
 
        divisorsum(n, i + 1);
    }
}
 
// Driver code
int main()
{
    sum=0;
    int n;
    scanf("%d",&n);
    divisorsum(n,1);
     int ans=sum-2*n;
     if(ans>0) printf("%d\n",ans);
     else{printf("Not abundant\n");}
}