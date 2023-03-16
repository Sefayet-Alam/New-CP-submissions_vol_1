#include<bits/stdc++.h>
using namespace std;

int IsPrime(int a)
{
    int x;
    for(x = 2; x < a; x++){
        if(a % x == 0)
            return 0;
    }
    return 1;
}

int DistinctPrimeCount(int n)
{
    int i, j = 0;
    for(i = 2; i <= n; i++){
        if(n % i == 0)
            j += IsPrime(i);
    }
    return j;
}

int main()
{
    int N, M, i, j, k;
    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%d", &M);
        printf("%d\n",DistinctPrimeCount(M));
    }    
}