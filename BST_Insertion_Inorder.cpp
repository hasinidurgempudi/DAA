#include<iostream>
using namespace std;
struct node{
	int data;
	node* left;
	node* right;
	node(int val){
		data=val;
		left=right=NULL;
		
	}
	
};
class BST{
	public:
	node* root;
BST(){root=NULL;
	}

 node* insertnode(node* root,int val){
 	
 	
 	if(root==NULL){
 		return new node(val);
 		
	 }
	 {
	 	if (val>root->data){
	 		root->right=insertnode(root->right,val);
		 }
		 else{
		 	root->left=insertnode(root->left,val);
		 }
		 return root;
	 }}
	void inorder(node* root){
		if (root==NULL) return;
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
		
		
	}
	 
 	
 	
 	
 	
 	
 	
 	
 };
 int main(){
 	BST b;
 	b.root=b.insertnode(b.root,4);
 	b.insertnode(b.root,2);
 	b.insertnode(b.root,6);
 	b.insertnode(b.root,5);
 	b.insertnode(b.root,9);
 	cout<<"inorder traversal: ";
 	b.inorder(b.root);
 	return 0;

 	
 }
