#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    while(getline(cin,a,'\n'))
    {
        for(int i=0;i<a.size();i++)
        {
            if(a[i]>='a' && a[i]<='z')
                a[i]='Z'-(a[i]-'a');
            else if(a[i]>='A' && a[i]<='Z')
                a[i]='z'-(a[i]-'A');
            else if(a[i]=='9')
                a[i]='0';
            else if(a[i]>='0' && a[i]<='8')
                a[i]++;
        }
        cout<<a<<"\n";
    }
    return 0;
}
