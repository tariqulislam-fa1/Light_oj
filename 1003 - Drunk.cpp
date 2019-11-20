#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string>mp;
    string str,str1;
    int t,m;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        int c=0;
        cin>>m;
        int l=m;

        while(m--)
        {
            cin>>str>>str1;
            if(str1=="wine")c++;
           // mp.insert(pair<int,string>(c++,str));
        }
        if(c==l)printf("Case %d: Yes\n",i);
        else printf("Case %d: No\n",i);
    }
}
