#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;

struct list
{
	int val;
	list *next;
};

void reverse(list *st)
{
	list *p,*q,*r;
	q=NULL;
	p=st;
	while(p!=NULL)
	{
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	
	while(q!=NULL)
	{
		cout<<q->val<<"\n";
		q=q->next;
	}
}

int main()
{
	int x;
	list *head,*p;
	for(int i=0;i<5;i++)
	{
       list *a=new list;
       if(i==0)
       head=a;
       else
       p->next=a;
		cin>>x;
		a->val=x;
		a->next=NULL;
		p=a;
	}
	p=head;
	while(p!=NULL)
	{
		cout<<p->val<<"\n";
		p=p->next;
	}
    reverse(head);	
	return 0;
}




