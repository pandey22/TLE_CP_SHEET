#include <bits/stdc++.h>
using namespace std;

int main() {

    long long n;
    cin>>n;
    vector<int> v;
    v.push_back(n);
    while(n!=1)
    {
        if(n%2==0)
        {
            n/=2;
            v.push_back(n);
        }
        else{
            n=n*3+1;
            v.push_back(n); 
        }    
    }
    for(vector<int>::size_type int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }    

    return 0;
}