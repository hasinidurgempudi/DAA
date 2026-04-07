#include<iostream>
using namespace std;

int main(){
	int a[100], n;
	cout<<"Enter size: ";
	cin>>n;

	cout<<"Enter array: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	for(int i=0;i<n/2;i++){
		int temp = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = temp;
	}

	cout<<"Reversed array: ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}

	return 0;
}
