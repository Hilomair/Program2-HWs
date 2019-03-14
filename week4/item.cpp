#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T,N,M,item[10001],stu[10001];
    cin>>T;
    while(T--)
    {
        cin>>N>>M;
        for(int i=0;i<N;i++)
            cin>>item[i];
        for(int i=0;i<M;i++)
            cin>>stu[i];
        sort(item,item+N);
        sort(stu,stu+M);
        int cnt=0,ans=0;
        for(int i=0;i<M;i++)
        {
            if(stu[i]>=item[cnt])
            {
                cnt++;
                ans+=stu[i];
            }
            if(cnt==N)
                break;
        }
        if(cnt<N)
            cout<<"-1";
        else
            cout<<ans;
        if(T)
            cout<<"\n";
    }
    return 0;
}
