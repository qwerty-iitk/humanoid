#include<bits/stdc++.h>
using namespace std;

class LRUCache {
public:
    class node{
        public:
        int key;
        int val;
        node* l;
        node* r;
        node(int k,int val){
            l=NULL;
            r=NULL;
            this->val=val;
            key=k;
        }
    };
    
    node* head=new node(0,0);
    node* tail=new node(0,0);
    
    unordered_map<int,node*> mp;
    int c=0;
    
    LRUCache(int capacity) {
        c=capacity;
        head->r=tail;
        tail->l=head;
    }
    
    void insert(int key, int val){
        node* tp=head->r;
        head->r=new node(key,val);
        head->r->r=tp;
        head->r->l=head;
        tp->l=head->r;
        mp[key]=head->r;
    }
    
    void del(node* t){
        t->r->l=t->l;
        t->l->r=t->r;
        mp.erase(t->key);
    }
    
    int get(int key) {
        int t=-1;
        if(mp.find(key)!=mp.end()){
            node* l=mp[key];
            
            t=l->val;
            del(l);
            insert(key,t);
        }
        return t;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            node* l=mp[key];
            l->val=value;
            del(l);
            insert(key,value);
        }else{
            if(mp.size()==c){
                del(tail->l);
            }
            insert(key,value);
        }
    }
};

int main()
{
    cout<<"Enter the size\n";
    int cap;
    cin>>cap;
    LRUCache *obj=new LRUCache(cap);
     cout<<"Enter the number of test cases\n";
    int t;
    cin>>t;
    int q;
    while(t--)
    {
        cout<<"Enter the query\n";
     cin>>q;

     if(q==0)
     {
        int k;
        cin>>k;
        cout<<obj->get(k)<<"\n";
     }
     else if(q==1)
     {
        int k,val;
        cin>>k>>val;
        obj->put(k,val);
     }


    }
    
}