#include<iostream>
using namespace std;

class Queue{
	int *arr;
	int start, end, curSize, maxSize;
	
	public:
		Queue(){
			arr = new int[16];
			start = -1;
			end = -1;
			curSize = 0;
		}
		
		Queue(int maxSize){
			this->maxSize = maxSize;
			arr= new int[maxSize];
			start = -1;
			end = -1;
			curSize = 0;
		}
		
		void Push(int num){
			if(curSize == maxSize) {
				cout << "Queue is full" << endl;
				exit(1);
			}
			if(end ==-1){
				start = 0;
				end = 0;
			}else{
				end = (end+1) % maxSize;
				arr[end] = num;
			curSize++; 
			}
		}
		
		int Pop(){
			if(end ==-1) {
				cout << "Que is Empty" << endl;
				exit(1);
			}
			int poppedElement = arr[start];
			if(curSize == 1){
				start = -1;
				end = -1;
			}
			start = (start+1) % maxSize;
			curSize--;
			return poppedElement;
		}
		
		int Top(){
			if(start ==-1){
				cout << "Queue is Empty" << endl;
				exit(1);
			}
			return arr[start] ;
			
		}
		
		int Size(){
			return curSize;
		}
};

int main(){
	
	return 0;
}