#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int s,pos,first,last,n,i,a,j;
    cin>>n;
    vector<int>v;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }   
    cin>>pos>>first>>last;
    v.erase(v.begin()+(pos-1));
    v.erase(v.begin()+first-1,v.begin()+last-1);
    s=v.size();
    cout<<s<<endl;
    for(j=0;j<s;j++)
    {
        cout<<v[j]<<" ";
    }
return 0;
}