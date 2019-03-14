#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T,N;
    vector<int> n[10001];
    cin>>T;
    while(T--)
    {
        cin>>N;
        for(int i=0;i<10001;i++)
            n[i].clear();
        for(int i=0;i<N;i++)
        {
            int tmp;
            cin>>tmp;
            n[tmp].push_back(i);
        }

    }
    return 0;
}
