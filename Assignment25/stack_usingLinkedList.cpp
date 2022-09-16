#include<bits/stdc++.h>
using namespace std;
class Queue{
    private:
    int data;
    Queue *next;
    Queue *tail;
    Queue *start;
    int length ;
    public:
    Queue()
    {
        start=tail=NULL;
        length=0;
        
        
    }
    void push(int d);
    void pop();
    int Qsize()
    {
        return length;
    }
    bool isEmpty()
    {
        if(!start)return true;
        return false;
    }
        int front()
    {
    
        return start->data;
    }
};
void Queue::push( int d)
{   
    if(!start)
    {   Queue *New_Node = new Queue;
        New_Node->data=d;
        New_Node->next=NULL;
        tail= start=New_Node;
        length++;
    
    }
    else{
    Queue *New_Node = new Queue;
    New_Node->data=d;
    tail->next=New_Node;
    
    tail= New_Node;
    tail->next=NULL;
    length++;
    }


}
void Queue::pop()
{
    if(!start)
    {
        cout<<"underflow";
        return;
    }
start = start->next;
length--;
}





int main() {
	Queue q; //constructor is called on this line
	q.push(4);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.Qsize()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	
	q.push(5);
	q.push(3);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.Qsize()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.Qsize()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	return 0;
}
