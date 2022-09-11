/*Q1 . Implement queue and stack using linked list. It should have operations like insertion, deletion, return current size of stack/queue, 
returning front and top element respectively.*/

#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node* link;
};

Node* top;
int size=0;

void push(int data)
{
    Node*temp=new Node();
    if(!temp)
    {
        cout<<"Stack overflow\n";
        return;
    }
   
     size++;
    temp->data=data;
    temp->link=top;
    top=temp;

}
int cap()
{
    return size;
}

int topEle()
{
    if(cap()>0)
    return top->data;
    else
    return -99999;
}

void pop()
{
    Node* temp;
    if(top==NULL)
    {
        cout<<"Underflow\n";
        return;
    }
    temp=top;
    top=top->link;
    size--;
    free(temp);
}
int main()
{
     cout<<" 1.PUSH \n 2.POP \n 3.size \n 4.Top \n 5.exit\n";
     int ch ;
    cin>>ch;
    while(ch!=5)
    {switch(ch)
    {
        case 1:
        cout<<"Enter the value: \n";
        int val;
        cin>>val;
        push(val);

        break;
        case 2:
        pop();
        break;
        case 3:
        cout<<size<<"\n";
        break;
        case 4:
        if(topEle()==-99999)
        cout<<"Underflow\n";
        else
        cout<<topEle()<<"\n";
        break;
        default:
        cout<<"invalid choice\n";

    }
    cout<<"1.PUSH \n 2.POP \n 3.size \n 4.Top \n 5.exit\n";
    cin>>ch;
    }



}