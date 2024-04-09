#include <iostream>
using namespace std;
#define Max 1000
class stack{
	int top;
	public:
		int a[Max];
		stack(){
			top=-1;
		}
		bool push(int x);
		int pop();
		int peek();
		bool IsEmpty();
}; 
bool stack::push(int x){
	if(top>=(Max-1)){
		cout<<"stack overflow"<<endl;
		return false;
	}
	else{
		a[++top]=x;
		cout<<"pushed into stack\n"<<endl;
		return true;
	}
}
int stack::pop(){
	if(top<0){
		cout<<"stack underflow"<<endl;
		return 0;
	}
	else{
		int x=a[top--];
		return x;
	}
}
int stack::peek(){
	if(top<0){
		cout<<"stack is empty"<<endl;
		return 0;
	}
	else{
		int x=a[top];
		return x;
	}
}
bool stack::IsEmpty(){
	return(top<0);	
}
int main(){
	class stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout<<"popped from the \n"<<s.pop();
	cout<<endl;
	cout<<"Top element is:"<<s.peek();
	cout<<endl;
	cout<<"Elements present in stack";
	cout<<endl;
	while(!s.IsEmpty()){
		cout<<s.peek()<<"";
		cout<<endl;
		s.pop();
	}
	system("pause");
	return 0;
}