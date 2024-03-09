//write a program to implement paranthesis checker
#include <iostream>
#include <cstring>
using namespace std;

int main() {
   	char expression[50];
   	int x=0, i=0;
   	cout <<"Enter the Expression" << endl;
   	cin >> expression ;
   	while(expression[i] != '\0'){
   		if(expression[i] == '('){
   			x++;
		   }
		   else if(expression[i] == ")"){
		   	x--;
		   	if(x < 0){
		   		break;
			   }
		   }
		   i++; 
	}
	if(x==0){
		cout << "Expression is balanced" << endl;
	}else{
		cout << "Expression is unbalanced" << endl;
	}
    return 0;
    
}

