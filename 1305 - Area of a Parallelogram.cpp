#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ax,ay,bx,by,cx,cy;
    cin>>t;

    for(int i=1;i<=t;i++){
        cin>>ax>>ay>>bx>>by>>cx>>cy;

        int dx=(ax+cx)-bx;
        int dy=(ay+cy)-by;

        int A=(by-ay);
        int B=-(bx-ax);
        int C=((-ax)*A)-((-ay)*(-B));

        int result=(A*dx)+(B*dy)+C;

        if(result<0)result=-(result);

        printf("Case %d: %d %d %d\n",i,dx,dy,result);

    }
}
