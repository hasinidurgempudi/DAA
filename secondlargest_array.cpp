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

	int max = a[0], second = -1;

	for(int i=0;i<n;i++){
		if(a[i] > max){
			second = max;
			max = a[i];
		}
		else if(a[i] > second && a[i] != max){
			second = a[i];
		}
	}

	cout<<"Second largest: "<<second;
	return 0;
}
