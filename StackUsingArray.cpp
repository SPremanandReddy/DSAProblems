#include<iostream>
using namespace std;

class Stack{
	
		int top=-1;
		int size;
		int *arr;
		int number;
	public:
		Stack(){
			
			size = 1000;
			arr = new int[size];
		}
	public:
		void Push(int num){
			if(top == size-1){
				cout << "Stack is overflow" << endl;
				return ;
			}
			top++;
			arr[top] = num;
			cout << "Value is added to Stack" << endl;
		}
		
		void Top(){
			cout << "Top Element is " ;
			cout << arr[top] << endl;
		}
		
		void Pop(){
			int lastElement = arr[top];
			top--;
			cout << "Top Element is deleted " ;
			cout << lastElement << endl;
		}
		
		void Size(){
			cout << "Size of the Stack is ";
			cout << top +1 << endl;
		}
	
};
int main(){
	Stack s;

	s.Push(10);
	s.Top();
	s.Push(20);
	s.Top();
	s.Push(30);
	 s.Pop();
	s.Top();
	s.Size();
	return 0;
}