#include<bits/stdc++.h>
using namespace std;
int a, b, c, d, e, f,m=10000007;
int dp[10001];
int fn( int n ) {

    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;

    if(dp[n]!=-1)return dp[n];

    else {
       dp[n]= fn(n-1)%m + fn(n-2)%m + fn(n-3)%m + fn(n-4)%m + fn(n-5)%m + fn(n-6)%m ;
       dp[n]=dp[n]%m;
       return dp[n];
    }

}
int main() {
    int n, caseno = 0, cases;
    scanf("%d", &cases);


    while( cases-- ) {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        for(int i=0;i<=n;i++)dp[i]=-1;
        printf("Case %d: %d\n", ++caseno, fn(n)%m);
    }
    return 0;
}
