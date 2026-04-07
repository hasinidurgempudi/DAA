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

	int j = 0;

	for(int i=0;i<n;i++){
		if(a[i] != 0){
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			j++;
		}
	}

	cout<<"Result: ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}

	return 0;
}
