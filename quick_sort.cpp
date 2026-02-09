#include<iostream>
using namespace std;
int part(int a[],int s,int e){
	int pivot=a[e];
	int i=s;
	for(int j=s;j<e-1;j++){
	if	(a[j]<pivot)
		swap(a[i],a[j]);
		i++;
	}
	swap(a[i],a[e]);
	return i;
}
void quic(int a[],int s,int e){
	if (s>=e)return;
	int p=part(a,s,e);
	quic(a,s,p-1);
	quic(a,p+1,e);
}
int main(){
	int a[]={20,64,12,27,39};
	int n=sizeof(a)/sizeof(a[0]);
	quic(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
		
	} cout<<endl;
	return 0;
	
}
