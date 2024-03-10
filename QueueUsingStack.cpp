#include<bits/stdc++.h>
using namespace std;

struct Queue {
	stack<int> input,output;
	
	void Push(int data){
		while(!input.empty()){
			output.push(input.top());
			input.pop();
		}	
	
		cout << "The element pushed data is " << data << endl;
		input.push(data);
		
		while(!output.empty()){
			input.push(output.top());
			output.pop();
		}
	}
	
	int Pop(){
		if(input.empty()){
			cout << "Queve is empty " << endl;
			exit(1);
		}
		int x = input.top();
		input.pop();
		return x;
	}
	
	int Top(){
		if(input.empty()){
			cout << "Queue is empty" << endl;
			exit(1);
		}
		return input.top();
	}
	
	int Size(){
		return input.size();
	}
};
int main(){
	Queue q;
  q.Push(3);
  q.Push(4);
  cout << "The element poped is " << q.Pop() << endl;
  q.Push(5);
  cout << "The top of the queue is " << q.Top() << endl;
  cout << "The size of the queue is " << q.Size() << endl;

	
	return 0;
}