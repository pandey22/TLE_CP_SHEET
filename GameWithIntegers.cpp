#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1)
            cout<<"First"<<endl;
        else if(n%3==0)
            cout<<"Second"<<endl;
        else 
            cout<<"First"<<endl;
        
    }
    return 0;
}