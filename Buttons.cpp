#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cases;
    cin>>cases;
    while(cases--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(c%2==0)
        {
            if(a>b)
                cout<<"First"<<endl;
            else    
                cout<<"Second"<<endl;
        }
        else
            if(b>a)
                cout<<"Second"<<endl;
            else
                cout<<"First"<<endl;
    }
    return 0;
}