#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T,N,M,n[100001];
    priority_queue<int,vector<int>,greater<int> > pq;
    cin>>T;
    while(T--)
    {
        cin>>N>>M;
        for(int i=0;i<N;i++)
            cin>>n[i];
        for(int i=0;i<N;i++)
        {
            if(pq.size()<M)
                pq.push(n[i]);
            else
            {
                int tmp=pq.top();
                pq.pop();
                tmp+=n[i];
                pq.push(tmp);
            }
        }
        int r = pq.size();
        for(int i=0;i<r-1;i++)
            pq.pop();
        cout<<pq.top();
        pq.pop();
        if(T)
            cout<<"\n";
    }
    return 0;
}
