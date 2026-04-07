#include<iostream>
using namespace std;
#define MAX 10
class stack {
	int top;
	public:
		stack() {
		top=-1;}
		char arr[MAX];
		char postfix[MAX];
		void push(char x);
		char pop ();
		int isoperand(char h);
		int pre(char h );
		void display();
		void convert(char exp[]);
		int stacktop();
		int isempty();
		
};
void stack::display(){
int i;
for(i=top;i>=0;i--)
{cout<<i<<endl;
}
	
}
void stack::push(char x)
{
	if (top==9)
	cout<<"stack overflow";
	else {
	
	top++;
	arr[top]=x;
	cout<<x<<"pushed into the stack"<<endl;}
	
}
char stack:: pop (){
	
	if (top==-1){
	
	cout<<"stack underflow";
	return '/0';}
	else 
	{
	char x=arr[top];
	top--;
	return x;}}
	int stack::isoperand(char h)
	{
		return!(h=='+'||h=='-'||h=='*'||h=='/');
		
	}
	int stack::pre(char h){
		if (h=='+'||h=='-')
		return 1;
		else(h=='*'||h=='/');
		return 2;
	}
	int stack::stacktop(){
		if (top==-1)
		return -1;
		
		return arr[top];
	}

	
	void stack::convert(char exp[]){
		
		int i=0;
		int j=0;
		
		while(exp[i]!='\0')
		{if (isoperand(exp[i]))
		postfix[j++]=exp[i++];
		else 
		{if (pre(arr[i])>pre(exp[top]))
		push(exp[i++]);
		else 
		postfix[j++]=pop();
		
		}
		}
		while (!isempty())
		{postfix[j++]=pop();
		}
		postfix[j]='/0';
		cout<<postfix;
	}
	int stack::isempty(){
		if(top==-1)
		{
		cout<<"empty stack";
		return 0;}
		
	}

int main(){
	class stack s;
	
	char exp[]="a+b*c";
	 s.convert(exp);
	 return 0;
	 
}
