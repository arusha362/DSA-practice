#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};

class Stack{
	public:
     Node *top;
     Node *end;
     Node *new_node= new Node;
     int len=0;
	   Stack(){
        top =NULL;
        end =top;
    }
	  //push the value at the Top
	void push(int val){
        Node *temp= new Node; 
        cout<<"Pushing val "<<val<<endl;
        temp->data=val;
		if(!top&&!end)
        {   temp->next=NULL;
            
            top=temp;
            end= temp;
        }
        else
        {
        temp->next = top;
        top = temp;
        }
        len++;

	}
	
	int front(){
		cout<<"returning the value at front\n";
		return top->data;
	}
  
	void pop()
    {
		cout<<"removing the top element\n";
        if(!top){
            cout<<"Under flow ";
            return;
        }
        if(!top->next)
            end=NULL;
        Node *temp;
        top=top->next;
        len --;      
	}
	
	int size(){
		cout<<"return the size of the Stack\n";
		return len;
	}
	
	bool isEmpty(){
		cout<<"returning if the Stack is empty\n";
        if(!top)return true;
		return false;
	}
    void display(){
        if(!end){
            cout<<"No element in stack";
            return;
        }
        cout<<"\nElements in stack \n";
        Node *temp= top;
        
        for(int i=0;i<len;i++)
        {
            cout<<temp->data<<endl;
            temp=temp->next;

        }
    }
};

int main() {
	Stack q; //constructor is called on this line
	q.push(4);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: 1 for empty 0 for not empty : "<<q.isEmpty()<<"\n";
	
	q.push(5);
	q.push(3);
    q.display();
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: 1 for empty 0 for not empty : "<<q.isEmpty()<<"\n";
	
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: 1 for empty 0 for not empty : "<<q.isEmpty()<<"\n";
    q.display();
	return 0;
}
