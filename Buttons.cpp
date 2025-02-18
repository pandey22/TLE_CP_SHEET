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
        if((a+b)%2 == 0 && c%2!=0)
            cout<<"First"<<endl;
        else if((a+b)%2==0 && c%2 == 0)
            cout<<"Second"<<endl;
        else if(b>a)
        {
            cout<<"Second"<<endl;
        }
        else
            cout<<"First";
    }
    return 0;
}