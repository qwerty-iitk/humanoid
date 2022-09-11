/*Q4 . Given a stream of numbers using appropriate stl containers print the elements in increasing order. */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int>s;

    cout<<"enter the number of elements\n";
    int n;
    cin>>n;

    cout<<"enter the elements\n";
    int e;
    for(int i=0;i<n;i++)
    {
        cin>>e;
        s.insert(e);

    
    }
    for(auto it:s)
    {
        
        cout<<it<<" ";

    
    }


}

