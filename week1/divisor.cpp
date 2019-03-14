#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a,int b)
{
    if(a<b) swap(a,b);
    if(a%b==0) return b;

    return gcd(b,a%b);
}

int main()
{
    int D,Q1,Q2,R1,R2,n,t;
    cin>>n;
    while(n--)
    {
        cin>>Q1>>R1>>Q2>>R2;
        Q1-=R1;
        Q2-=R2;
        t = gcd(Q1,Q2);
        for(int i=1;i<=t/2;i++)
            if(t%i==0)
                cout<<i<<" ";
        cout<<t<<"\n";
    }
    return 0;
}
