#include "ClassInvertedIndex.h"

#include <iostream>
#include <cctype>
#include <stdlib.h>
#include <conio.h>

using namespace std;

ClassInvertedIndex::ClassInvertedIndex()
{
    //ctor
}

ClassInvertedIndex::~ClassInvertedIndex()
{
    //dtor
}

// Inserting a node to main
void ClassInvertedIndex::insert(int x,int y,ptr &p)
{
if (p == NULL)
	{
		p = new node;
		p->value = x;
		p->left=NULL;
		p->right = NULL;
		p->height=0;


		ptr_child z;
		z=NULL;
        insert_child(y,z);
		//cout<<"New x:"<<x<<endl;
		if (p==NULL)
		{
			cout<<"Out of Space\n"<<endl;
		}
	}
	else
	{
		if (x<p->value)
		{
		    //cout<<"x left:"<<x<<endl;
			insert(x,y,p->left);
			if ((m_height(p->left) - m_height(p->right))==2)
			{
				if (x < p->left->value)
				{
					p=srl(p);
				}
				else
				{
					p = drl(p);
				}
			}
		}
		else if (x>p->value)
		{//cout<<"x right:"<<x<<endl;
			insert(x,y,p->right);
			if ((m_height(p->right) - m_height(p->left))==2)
			{
				if (x > p->right->value)
				{
					p=srr(p);
				}
				else
				{
					p = drr(p);
				}
            }
		}
		else
		{
			insert_child(y,&z);
		}
//}
//cout<<"oiw:"<<&p<<endl;
int m,n,d;
m=m_height(p->left);
n=m_height(p->right);
d=max(m,n);
p->height = d + 1;
}

// Inserting a node to child
void ClassInvertedIndex::insert_child(int y,ptr_child &z)
{
if (z == NULL)
	{
		z = new node_child;
		z->value = y;
		z->left=NULL;
		z->right = NULL;
		z->height=0;
        //
        //
        node_child
		//cout<<"New x:"<<y<<endl;
		if (z==NULL)
		{
			cout<<"Out of Space\n"<<endl;
		}
	}
	else
	{
		if (y<z->value)
		{
		    //cout<<"x left:"<<y<<endl;
			insert_child(y,z->left);
			if ((c_height(z->left) - c_height(z->right))==2)
			{
				if (y < z->left->value)
				{
					z=srl(z);
				}
				else
				{
					z = drl(z);
				}
			}
		}
		else if (y>z->value)
		{//cout<<"y right:"<<y<<endl;
			insert_child(y,z->right);
			if ((c_height(z->right) - c_height(z->left))==2)
			{
				if (y > z->right->value)
				{
					z=srr(z);
				}
				else
				{
					z = drr(z);
				}
            }
		}
		/*else
		{
			cout<<"value Exists\n"<<endl;
		}*/
}
//cout<<"oiw:"<<&z<<endl;
int m_c,n_c,d_c;
m_c=c_height(z->left);
n_c=c_height(z->right);
d_c=max(m_c,n_c);
z->height = d_c + 1;
}

int ClassInvertedIndex::max(int value1, int value2)
{
		return ((value1 > value2) ? value1 : value2);

}

int ClassInvertedIndex::m_height(ptr p)
{
int t;
	if (p == NULL)
	{
		return -1;
	}
	else
	{
		t = p->height;
		return t;
	}
}

int ClassInvertedIndex::c_height(ptr_child z)
{
 int t;
	if (z == NULL)
	{
		return -1;
	}
	else
	{
		t = z->height;
		return t;
	}
}
ptr ClassInvertedIndex:: srl(ptr &p1)
{
	
}
ptr ClassInvertedIndex:: srr(ptr &p1)
{
	
}
ptr ClassInvertedIndex:: drl(ptr &p1)
{
	
}
ptr ClassInvertedIndex::drr(ptr &p1)
{
	
}

//Node_child
ptr_child ClassInvertedIndex:: srl(ptr_child &p1)
{
	
}
ptr_child ClassInvertedIndex:: srr(ptr_child &p1)
{
	
}
ptr_child ClassInvertedIndex:: drl(ptr_child &p1)
{
	
}
ptr_child ClassInvertedIndex::drr(ptr_child &p1)
{
	
}




// Copy a tree
void ClassInvertedIndex::copy(ptr &p,ptr &p1)
{
	makeempty(p1);
	p1 = nodecopy(p);
}
// Make a tree empty
void ClassInvertedIndex::makeempty(ptr &p)
{
	ptr d;
	if (p != NULL)
	{
		makeempty(p->left);
		makeempty(p->right);
		d=p;
		free(d);
		p=NULL;
	}
}
// Copy the nodes
ptr ClassInvertedIndex::nodecopy(ptr &p)
{
	ptr temp;
	if (p==NULL)
	{
		return p;
	}
	else
	{
		temp = new node;
		temp->value = p->value;
		temp->left = nodecopy(p->left);
		temp->right = nodecopy(p->right);
		return temp;
	}
}

void ClassInvertedIndex::inorder(ptr p)
{
	if (p!=NULL)
	{
		inorder(p->left);
		cout<<p->value<<"\t";
		inorder(p->right);
	}
}


// Deleting a node
void ClassInvertedIndex::del(int x,ptr &p)
{

}

int ClassInvertedIndex::deletemin(ptr &p)
{
	
}
