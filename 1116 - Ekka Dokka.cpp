#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int w,j;
    int t,i;
    cin>>t;

    for( i=1; i<=t; i++)
    {
        int c=0;
        cin>>w;

        if(w%2==1)
            printf("Case %d: Impossible\n",i);

        else
        {
            for( j=2; j<=w; j=j+2)
            {


                    if(w%j==0)
                    {
                        long long int r=w/j;

                        if(r%2==1)
                        {
                            printf("Case %d: %lld %lld\n",i,r,j);
                            c=1;
                            break;
                        }


                    }




            }
            //long long int s=sqrt(w)-1;

            if(c==0)
                printf("Case %d: 1 %d\n",i,w);

        }
    }
}
