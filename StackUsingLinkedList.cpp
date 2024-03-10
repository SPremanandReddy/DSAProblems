#include<bits/stdc++.h>
using namespace std;

struct Node{
	int value;
	Node* next;
};

struct Stack{
	Node* head;
	int stackSize;
	
	Stack(){
		head = NULL;
		stackSize =0;
	}
	
	void Push(int x){
		Node* temp = new Node();
		temp->next = head;
		temp->value = x;
		head = temp;
		
		cout << "Element " << x << " Pushed in to the stack." << endl; 
		stackSize++;
	}
	
	int Pop(){
		if(head==NULL){
			cout << "Stack is empty" << endl;
			return -1 ;
		}
		Node* temp = head;
		cout << head->value << " Is removed " << endl;
		head = temp->next ;
	
		temp->next = NULL;
		delete temp;
		
		stackSize--;
	}
	
	int Top(){
		if(head==NULL){
			cout << "Stack is empty " << endl;
			return -1;
		}
		cout << "Top Element " << head->value << endl;
		return head->value;
	}
	
	int Size(){
		cout << "Size of Stack " << stackSize << endl;
		return stackSize ;
	}
		
	int empty(){
		if(head == NULL){
			cout << "Stack is empty " << endl;
			return 1;
		}
		cout << "Stack isnot empty" << endl;
		return 0;
	}
	
	void displayStack(){
        if(head == NULL){
            cout << "Stack is empty" << endl;
            return;
        }

        Node* current = head;
        cout << "Stack: ";
        while(current != NULL){
            cout << current->value << " ";
            current = current->next;
        }
        cout << endl;
    }

	
};

int main(){
	
	Stack mystack;
	mystack.empty();
	mystack.Push(7);
	mystack.Push(9);
	mystack.Pop();
	mystack.Push(10);
	mystack.Top();
	mystack.Size();
	mystack.empty();
	mystack.Push(11);
	mystack.Push(12);
	mystack.Push(13);
	mystack.Push(14);
	mystack.Push(15);
	mystack.displayStack();
	mystack.Pop();
	mystack.displayStack();
	return 0;
}