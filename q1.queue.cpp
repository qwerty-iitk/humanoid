/*Q1 . Implement queue and stack using linked list. It should have operations like insertion, deletion, return current size of stack/queue, 
returning front and top element respectively.*/

#include<bits/stdc++.h>
using namespace std;

int size=0;
struct QNode {
    int data;
    QNode* next;
    QNode(int d)
    {
        data = d;
        next = NULL;
    }
};
  
struct Queue {
    QNode *front, *rear;
    Queue()
    {
        front = rear = NULL;
    }
  
    void enQueue(int x)
    {
  
       size++;
        QNode* temp = new QNode(x);
  
       
        if (rear == NULL) {
            front = rear = temp;
            return;
        }
  
       
        rear->next = temp;
        rear = temp;
    }
  
    
    void deQueue()
    {
       
        if (front == NULL)
            return;
  
       
        QNode* temp = front;
        front = front->next;
  
       
        if (front == NULL)
            rear = NULL;
            size--;

            if(size==0)
            cout<<"Queue is empty\n";
            else
            cout<<temp->data<<"\n";
  
        delete (temp);
    }
};
int main()
{
    Queue q;
     cout<<" 1.PUSH \n 2.POP \n 3.size \n 4.exit\n";
     int ch ;
    cin>>ch;
    while(ch!=4)
    {switch(ch)
    {
        case 1:
        cout<<"Enter the value: \n";
        int val;
        cin>>val;
        q.enQueue(val);

        break;
        case 2:
        q.deQueue();
        break;
        case 3:
        cout<<size<<"\n";
        break;
       
        default:
        cout<<"invalid choice\n";

    }
    cout<<"1.PUSH \n 2.POP \n 3.size \n 4.exit\n";
    cin>>ch;
    }



}