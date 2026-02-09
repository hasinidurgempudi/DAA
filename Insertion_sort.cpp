#include<iostream>
using namespace std;
void insertionsort(int a[],int n){
	for (int i=1;i<n;i++){
	
	int key=a[i];
	int j=i-1;
 while(j>=0&&a[j]>key){
 	a[j+1]=a[j];
 	j--;
 	
 }
 a[j+1]=key;
}}
void display(int a[],int n){
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
}
int main(){
	int a[]={2,6,8,1,5,9};
	int n=sizeof(a)/sizeof(a[0]);
	insertionsort(a,n);
	display(a,n);
	return 0;
}
