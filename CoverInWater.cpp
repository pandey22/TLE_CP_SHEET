#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count_empty = 0 ;
        string search = "...";
        for(int i=0;i<n;i++)
        {
            if(s[i]=='.')
                count_empty++;
        }
        if(s.find(search)!= string::npos)
            cout<<2<<'\n';
        else    
            cout<<count_empty<<'\n';
    }
    return 0;
}
