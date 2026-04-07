#include<iostream>
using namespace std;

int main(){
	int a[100], n, key;
	cout<<"Enter size: ";
	cin>>n;

	cout<<"Enter array: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	cout<<"Enter element to search: ";
	cin>>key;

	for(int i=0;i<n;i++){
		if(a[i] == key){
			cout<<"Found at index "<<i;
			return 0;
		}
	}

	cout<<"Not found";
	return 0;
}
