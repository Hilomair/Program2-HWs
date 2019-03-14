#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T,N;
    pair<int,int> m[101];
    cin>>T;
    while(T--)
    {
        cin>>N;
        for(int i=0;i<N;i++)
            cin>>m[i].second;
        for(int i=0;i<N;i++)
            cin>>m[i].first;
        sort(m,m+N);
        long long M=0,flag=1;
        for(int i=0;i<N;i++)
        {
            M+=m[i].second;
            if(M>m[i].first)
            {
                flag=0;
                break;
            }
        }
        if(flag)
            cout<<"Yes";
        else
            cout<<"No";
        if(T)
            cout<<"\n";
    }
    return 0;
}
