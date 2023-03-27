#include<stdio.h>

int main(){
    int n,m;
   scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
   int l=0,r=0;
   int curr=arr[0];
   int maxm=0;
   while(r<n){
    if(curr<0 && l<=r){
        curr-=arr[l];
        l++;
    }
    else{
        if(curr>=maxm){
        maxm=curr;
        }
        r++;
        curr+=arr[r];
    }
    
   }
   printf("%d",maxm);
}
