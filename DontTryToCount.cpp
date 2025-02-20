#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int size1,size2;
        cin>>size1>>size2;
        string s;
        cin>>s;
        string x;
        cin>>x;
        int count = 0 ;
        for(int i=0;i<size1*size2;i++)
        {
            if(s.find(x)!=string::npos)
            {
                cout<<count<<endl;
                break;
            }
            else
                {
                    x=x+x;
                }
        }
        cout<<-1<<endl;
    }
}