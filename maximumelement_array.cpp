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

	int max = a[0];

	for(int i=1;i<n;i++){
		if(a[i] > max){
			max = a[i];
		}
	}

	cout<<"Maximum element: "<<max;

	return 0;
}
