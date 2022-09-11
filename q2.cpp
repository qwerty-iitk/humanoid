/*. Given an array, implement a function to find the number of distinct pairs having sum equal to  a given constant k. 
Time complexity of your algorithm should be O(n).*/

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
          cout<<"enter the sum\n";
         cin>>k;
    int ctr=0;

    unordered_map <int,int>m;

    for(int i=0;i<n;i++)
    {
        m[arr[i]]=1;
    }

    for(int i=0;i<n;i++)
    {
       ctr=ctr+m[k-arr[i]];
          if(m[k-arr[i]])
          {

          m[k-arr[i]]=0;
          m[arr[i]]=0;
          }



    }

    cout<<"The number of distinct pairs are: "<<ctr<<"\n";





}