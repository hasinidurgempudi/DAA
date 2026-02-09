#include<iostream>
using namespace std;

void selectionsort(int a[],int n){
	for(int i=0;i<n-1;i++){
	
	int mindex=i;
	 for(int j=i+1;j<n;j++){
	 
	if( a[j]<a[mindex]){
	
	 mindex=j;
	}
}
	swap(a[i],a[mindex]);
}
  }
void display(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
		
	}cout<<endl;
}
int main(){
	int a[]={2,8,5,10,4,3,6,7};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<"before: ";
	display(a,n);
	selectionsort(a,n);
	cout<<"after: ";
	display(a,n);
	return 0;
}
//Hasini Sai Durgempudi
//24MAB0A12
