#include<iostream>
using namespace std;
struct node{
	int data;
	node* left;
	node* right;
	node(int val){
		data= val;
		left=right=NULL;
		
	
	}
	
};
void preorder(node* root){
	if (root==NULL){
		return;
	}	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);

}
void inorder(node* root){

if (root==NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);}
	
void postorder(node* root){
		if (root==NULL){
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}
	int main(){
		node* root=new node(20);
		 root->left=new node(24);
		 root->right=new node(78);
		 root->left->left=new node(67);
		 root->left->right=new node(16);
		 root->right->right=new node(79);
		 root->right->left=new node(56);
		 cout<<"inorder traversal: ";
		 inorder(root);
		 cout<<endl;
		 cout<<"preorder traversal: ";
		 preorder(root);
		 cout<<endl;
		 cout<<"postorder traversal: ";
		 postorder(root);
		 cout<<endl;
		 return 0;
		 
	}
	
