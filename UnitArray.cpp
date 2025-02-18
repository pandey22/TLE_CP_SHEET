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
        vector<int> v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        int count_pos = 0 , count_neg = 0;
        int fin = 0 ;
        for(int i=0;i<n;i++)
        {
            if(v[i]==1)
                count_pos++;
            else    
                count_neg++;
        }
        if(count_neg==0)
            cout<<0<<endl;
        else
        {
            if(count_pos>=count_neg)
                cout<<0<<endl;
            else    
                while(count_pos<count_neg)
                {
                    fin++;
                    count_pos++;
                }
            cout<<fin<<endl;
        }

    }
    return 0;
}