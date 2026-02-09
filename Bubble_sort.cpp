#include<iostream>
using namespace std;
 void swap(int a,int b);
int main()
{
	int a[] ={7,4,6,9,3,2};
	for (int j=0;j<6;j++){
	
	for(int i=0;i<6-j-1;i++)
{
		{ if (a[i+1]<a[i]);
	swap(a[i],a[i+1]);
	
	}}
	
		for(int i=0;i<6;i++){
			cout<<a[i]<<" ";
		}
		return 0;
	
 
	
}}
void swap(int &a,int &b)
{
int temp=a;
a=b;
b=temp;}
