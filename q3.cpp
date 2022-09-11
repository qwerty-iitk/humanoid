/*Given an array of N elements, find the number of distinct elements in every window of size B. Assume B to be less than N. 
Time complexity of the algorithm should be O(n).*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
 cout<<"enter the size of array\n";
    int n;
    cin>>n;
    vector <int> arr(n);

    cout<<"enter the elements of array\n";

    int e;
    for(int i=0;i<n;i++)
    {
        cin>>e;
        arr[i]=e;
    }
         
         int k;
          cout<<"enter the window\n";
         cin>>k;
    int ctr=0;
      cout<<"number of distinct numbers in each windows are: \n";
    unordered_map <int,int>m;


     for(int i=0;i<k;i++)
     {
        m[arr[i]]++;
        if(m[arr[i]]==1)
        ctr++;
        
     }
     cout<<ctr<<"\n";

     for(int i=1;i<n-k;i++)
     {
        m[arr[i-1]]--;
        if(m[arr[i-1]]==0)
        ctr--;
        
        
        m[arr[i+k-1]]++;

        if(m[arr[i+k-1]]==1)
        ctr++;
        
        cout<<ctr<<"\n";




     }

     int i=n-k;
     m[arr[i-1]]--;
        if(m[arr[i-1]]==0)
        ctr--;
        
        
        m[arr[i+k-1]]++;

        if(m[arr[i+k-1]]==1)
        ctr++;
     cout<<ctr<<"\n";


}

