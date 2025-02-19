#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        if(a+b>=n)
        {
            if(a==b && b==n)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;

        }
        else
        {
            int diff = n-a-b;
                if(diff>1)
                    cout<<"Yes"<<endl;
                else    
                    cout<<"No"<<endl;
        }
    }
    return 0;
}