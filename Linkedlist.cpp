#include<iostream>
using namespace std;
class node{
	public:
	int data;
	 node* next;
	node(int val){
		data=val;
		next=NULL;
	}
	
};
void print(node* head){
	node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<"null"<<endl;
	
	
}
int length(node* head){
	int count=0;
	while(head!=NULL){
		count++;
		head=head->next;
		
	}
	return count;
}
int main(){
	node n1(7);
	node* n2=new node(8);
	n1.next=n2;
	node* head=&n1;
	print(head);
	length(head);
	return 0;}
