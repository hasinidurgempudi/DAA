#include<iostream>
using namespace std;

int main(){
	int a[100], b[100], n1, n2;

	cout<<"Enter size of array 1: ";
	cin>>n1;
	cout<<"Enter elements: ";
	for(int i=0;i<n1;i++) cin>>a[i];

	cout<<"Enter size of array 2: ";
	cin>>n2;
	cout<<"Enter elements: ";
	for(int i=0;i<n2;i++) cin>>b[i];

	int c[200], k = 0;

	for(int i=0;i<n1;i++){
		c[k++] = a[i];
	}

	for(int i=0;i<n2;i++){
		int found = 0;
		for(int j=0;j<n1;j++){
			if(b[i] == a[j]){
				found = 1;
				break;
			}
		}
		if(!found){
			c[k++] = b[i];
		}
	}

	cout<<"Union: ";
	for(int i=0;i<k;i++){
		cout<<c[i]<<" ";
	}

	return 0;
}
