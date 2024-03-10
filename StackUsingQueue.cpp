#include<bits/stdc++.h>
using namespace std;

class Stack{
	public:
		queue<int> q;
	
	void Push(int x){
		int s=q.size();
		q.push(x);
		for(int i=0; i<s; i++){
			q.push(q.front());
			q.pop();
		}
	} 
	
	int Pop(){
		int n=q.front();
		q.pop(); 
		return n;
	}
	
	int Top(){
		return q.front();
	}
	int Size(){
		return q.size();
	}
};

int main(){
	
	Stack s;
	s.Push(3);
	s.Push(2);
	s.Push(4);
	s.Push(1);
	cout << "Top of the Stack " << s.Top() << endl;
	cout << "Size of the Stack before removing the element " << s.Size() << endl;
	cout << "The Deleted Element is " << s.Pop()  << endl;
	cout << "Top of the Stack after removing the elements "<< s.Top() << endl;
	cout <<"Size of the Stack after removing the element "<< s.Size() <<  endl;
	return 0;
}