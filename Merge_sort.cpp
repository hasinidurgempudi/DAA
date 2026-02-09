#include<iostream>
using namespace std;
void mergesort(int a[],int left,int mid,int right){
	int n1=mid-left+1;
	int n2=right-mid;
	
	int L[n1],R[n2];
	for(int i=0;i<n1;i++){
	
	L[i]=a[left+i];
	}
	for(int j=0;j<n2;j++){
		
		R[j]=a[mid+1+j];
	}
	int i=0,j=0,k=left;
	while(i<n1&&j<n2){
		if(L[i]>R[j]){
		
		a[k++]=R[j++];}
		else 
	{
			a[k++]=L[i++];}
		
	}
	while(i<n1)
	a[k++]=L[i++];
	while(j<n2)
	a[k++]=R[j++];
}
void merge(int a[],int left,int right){
	if(left>=right)
	return;
	int mid=(left+right)/2;
	merge(a,left,mid);
	merge(a,mid+1,right);
	mergesort(a,left,mid,right);
}
int main(){
	int a[]={20,64,12,27,39};
	int n=sizeof(a)/sizeof(a[0]);
	merge(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
		
	} cout<<endl;
	return 0;
	
}
