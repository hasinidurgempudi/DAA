#include<iostream>
using namespace std;
struct node {
	int data;
	node* next;
	node* prev;
	node(int val){  data=val;
	next=prev=NULL;
	}
};
class dll{
	public:
		node* head;
		dll() { head=NULL;
		}
		void insert(int val){
			node* newnode=new node(val);
			if (head==NULL){
				head= newnode;
				return;
				
			}
			node* temp=head;
			while(temp->next!=NULL){
			
			temp=temp->next;}
			temp->next=newnode;
			newnode->prev=temp;
		}
	
	void forward(){
		node* temp=head;
		
		cout<<"forward ";
		while(temp!=NULL){
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}
	void backward(){
		if (head==NULL)
		return;
		node* temp=head;
			while(temp->next!=NULL){
			
			temp=temp->next;
		}
		cout<<"backward: ";
		while(temp!=NULL){
			cout<<temp->data<<" ";
			temp=temp->prev;
		}
		cout<<endl;
		
	}
};
int main(){
	dll d;
	d.insert(7);
	d.insert(6);
	d.insert(8);
	d.insert(4);
	d.insert(3);
	d.forward();
	d.backward();
	return 0;
}
