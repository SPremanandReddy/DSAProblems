#include<bits/stdc++.h>
using namespace std;
class QueueNode{
	public:
		int value;
		QueueNode* next;
		QueueNode(int data){
		value = data;
		next=nullptr;
	}
};

QueueNode *Front = nullptr, *Rare = nullptr;

class Queue{
	public:
		int Size=0;
		bool Empty();
		void Enqueue(int value);
		void Dequeue();
		int Peek();
		void display();
};

bool Queue :: Empty(){
	return Front==nullptr;
}

int Queue :: Peek(){
	if(Empty()){
		cout << "Queue is Empty " << endl;
		return -1;
	}else{
		return Front->value;
	}
}

void Queue :: Enqueue(int val){
	QueueNode* temp = new QueueNode(val);
	if(temp == nullptr){
		cout << "Stack is full" << endl;
	}else{
		if(Front == nullptr){
			Front=temp;
			Rare=temp;
		}else{
			Rare->next = temp;
			Rare = temp;
		}
		cout << "Inserted into Queue" << endl;
		Size++;
	}
}

void Queue :: Dequeue(){
	if(Front == nullptr){
		cout << "Queue is Empty " << endl;
	}else{
		cout << Front->value << " is removed from queue "<< endl;
		QueueNode* temp = Front;
		Front = Front->next;
		
		delete temp;
		Size--;
	}
}

void Queue :: display(){
	if(Front == nullptr){
		cout << "Stack is empty" << endl;
		return ;
	}
	QueueNode* temp = Front;
	while(temp != nullptr){
		cout << temp->value << " " ;
		temp = temp->next;
	}
}


int main(){
	
	Queue q;
	q.Enqueue(10);
	q.Enqueue(20);
	q.Enqueue(30);
	q.Enqueue(40);
	q.Enqueue(50);
	q.Dequeue();
	cout << "The size of the queue is " << q.Size << endl;
	cout << "The peek of the queue is " << q.Peek() << endl;
	q.display();
	return 0;
	
	
	
	
	
}