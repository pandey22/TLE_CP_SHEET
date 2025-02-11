#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int c = 1;
        if(s.size()==1)
            cout<<0<<endl;
        else{
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1])
                c++;
        }
        if(c==1)
            cout<<s.size()<<endl;
        else if(c==s.size())
        {
            cout<<1<<endl;
        }
        else
            cout<<c-1<<endl;
        }
    }
    return 0;
}