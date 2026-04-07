#include<iostream>
using namespace std;
#define MAX 100
class queue{
	int front,rear;
	int a[MAX];
	public:
		queue(){front=rear=-1;}
		bool isempty() { return rear==-1;
		}
		bool isfull() {
			return rear==MAX-1;
		}
		void enqueue(int x);
		void dequeue();
		void display();
};
void queue::enqueue(int x){
	if(isfull()){
		cout<<"queue is overflowed";
		
	}
	if (isempty()){
		front =0;
	}
	a[++rear]=x;
	cout<<"enqueued "<<x<<endl;
	
		
	
}
void queue::dequeue(){
	if(isempty()){
		cout<<"queue is underflowed";
		
	}
	cout<<"dequeued"<<a[front]<<endl;
	if(front==rear){
		front=rear=-1;
		}
else{
			front++;
			
		}
	}
		void queue::display() {
		if(isempty()){
			cout<<"q is empty";
			
			
		}
		else{
		for(int i=front;i<=rear;i++){
		cout<<a[i]<<" ";
		cout<<endl;
			
		}}
	}	int main() {
		queue q;
		
		
	
		q.enqueue(27);
		q.enqueue(19);
		q.enqueue(18);
		q.enqueue(16);
		q.enqueue(21);
		q.enqueue(4);
		q.dequeue();
		cout<<" queue is: ";
		q.display();
		return 0;
		
	}
