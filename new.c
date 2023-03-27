#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char arr[n];
    scanf("%s",arr);
    // printf("%s",arr);
    int freq[200];
    //ai<=10^5
    //ascii 'a'=97,z='123' //'A'
    for(int i=0;i<200;i++){
        freq[i]=0;
    }

    for(int i=0;i<n;i++){
        //c->99
        //freq[99]++;
        freq[arr[i]]++;
    }
    // for(int i='a';i<='z';i++){
    //     printf("%d-> %d\n",i,freq[i]);
    // }
    int q;
    scanf("%d",&q);
    
    while(q--){
        char c;
        scanf(" %c",&c);

        printf("%d\n",freq[(int)c]);
        
        //q*n
        //q<=10^5 ,n<=10^5
        //->O(q)

    }
}