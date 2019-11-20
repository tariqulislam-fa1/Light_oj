#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
unsigned long long int fac(int n)
{
    if(n==1)
        return 1;
    if(n==0)
        return 1;

    return n*fac(n-1);
}
int main()
{
    unsigned long long int n,r,sum;
    int t,c,j,r1;
    scanf("%d",&t);
    vector<int>v,v1;

    while(t--)
    {
        scanf("%lld",&n);
        for(int i=1; i<=20; i++)
        {

            r=fac(i);
            if(r>=n)
                {
                    c=i;
                    break;
                }
        }
        cout<<c<<endl;
        for(int x=0;x<c;x++)v.push_back(x+1);
        //for(int i=0;i<c;i++)cout<<v[i]<<" ";
        for(j=0; j<(1<<c); j++)
        {
            sum=0;
            for(int k=0; k<c; k++)
            {
                if(j & (1<<k))
                {
                    r1=v[k];
                    sum+=fac(r1);
                    v1.push_back(v[k]);
                }
            }
            //cout<<sum<<endl;
            //cout<<n<<endl;
            //for(int i=0;i<v1.size();i++)cout<<v1[i]<<" ";
            if(sum==n)
            {
                for(int l=0; l<v1.size(); l++)
                    printf("%d! ",v1[l]);
            }
            else
                {
                    v1.clear();


                }
        }
        cout<<endl;


    }
}
