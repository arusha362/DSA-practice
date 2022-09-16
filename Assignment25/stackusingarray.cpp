#include <iostream>
using namespace std;

//complete the functions
class Stack{
	int A[100000];
	int start;
	int end;
	
	public:
	//constructor is called whenever an object of the class is declared
	Stack(){
		cout<<"constructor is Called\n";
        start=-1;
        
	}
	
	//push the value at the Top
	void push(int val){
		cout<<"pushing the val: "<<val<<" at the Top of Stack\n";
        if(start==99999)
        {cout<<"overfollow \n";
        return;}
        A[++start]=val;
        

	}
	
	int front(){
		cout<<"returning the value at front\n";
		return A[start];

	}
	
	void pop(){
                if(start==-1){
            cout<<"underflow \n";
            return;
        }
		cout<<"removing the top element\n";

        start--;
	}
	
	int size(){
		cout<<"return the size of the Stack\n";
		return start+1;
	}
	
	bool isEmpty(){
		
        if(!(start+1))return true;
		return false;
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
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: 1 for empty 0 for not empty : "<<q.isEmpty()<<"\n";
	
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: 1 for empty 0 for not empty : "<<q.isEmpty()<<"\n";
    q.pop();
	return 0;
}
