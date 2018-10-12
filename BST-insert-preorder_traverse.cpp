#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;

struct bst
{
	int val;
	bst *left,*right;
};          //when we use recursion we need to use some return type except void

bst* insert(bst *root,int data)
{
	if(root==NULL)
	{
		root=new bst;
		root->val=data;
		root->left=root->right=NULL;
	}
	else
	{
		if(data<(root->val))
		root->left=insert(root->left,data);
		else
		if(data>(root->val))
		root->right=insert(root->right,data);
	}
	return root;
}  

void show(bst *root)
{
	cout<<root->val<<"\n";
	if(root->left!=NULL)
	show(root->left);
	if(root->right!=NULL)
	show(root->right);
}                                    

int main()
{
	bool q=true;
	bst *root;
	while(q)
	{
		int x;
		cout<<"enter value for node \n";
		cin>>x;
		root=insert(root,x);
		cout<<"enter 1 for more input or 0 to terminate \n";
		cin>>x;
		if(x==1)
		q=true;
		else
		q=false;
	}
	show(root);
	return 0;
}






