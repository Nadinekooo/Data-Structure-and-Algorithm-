#include"iostream"
#include"conio.h"
#include"stdio.h"

using namespace std;

struct node{
	char data;
	node *left;
	node *right;
};

node *root = NULL;

void tambahnode(node* *root, char isi){
	
	if(root = NULL)
	{
		node *baru;
		baru = new node;
		baru->data = isi;
		baru->left = NULL;
		baru->right = NULL;
		*root = baru;
	}
}

void preorder(node *root){
	
	if(root != NULL)
	{
		cout<<root->data<<' ';
		preorder(root->left);
		preorder(root->right);
	}
}

void inorder(node *root){
	
	if(root != NULL)
	{
		inorder(root->left);
		cout<<root->data<<' ';
		inorder(root->right);
	}
}

void preorder(node *root){
	
	if(root != NULL)
	{
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<' ';
	}
}

main(){
	
	char kata;
	tambahnode(&root,kata='A');
	tambahnode(&root->left,kata='B');
	tambahnode(&root->left->left,kata='C');
	tambahnode(&root->left->left->left,kata='D');
	tambahnode(&root->right,kata='E');
	tambahnode(&root->right->left,kata='F');
	tambahnode(&root->right->left->right,kata='G');
	
	cout<<"Tampillan secara PreOrder: ";
	preorder(root)
	cout<<endl;
	
	cout<<"Tampilkan secara InOrder: ";
	inorder(root)
	cout<<endl;
	
	cout<<"Tampilkan secara PostOrder: ";
	postorder(root)
	cout<<endl;
	
	getch();
}
















