/*************************************************************************
    > File Name: tree.cpp
    > Author: alex
    > Mail: malong2006@163.com 
    > Created Time: 2013年10月03日 星期四 21时49分33秒
 ************************************************************************/

#include<iostream>
#include <string>
#include <cctype>
using namespace std;

static void * tmalloc ( size_t size )
{
	void *p;
	if ( ( p = malloc(size )) == NULL )
	{
		cout <<"Out of memory\n";
		exit(1);
	}
	return p;
}

Bnode* InitBintreeNode ( size_t size )
{
	Bnode *n;
	n = tmalloc ( size );
	n -> Link [LEFT] = n -> Link [RIGHT] = NULL;
	RBONLY (n -> red = 0; )
	return n;
}

Bintree* NewBintree ( Bnode *dummy , ComFunc cf , int dum_ok , size_t node_size)
{
	Bintree *t;
	t=tmalloc(sizeof (Bintree) );
	t->DummuyHead = dummy;
	t->Compare = cf;
	t->DuplicatesOK=dup-ok;
	t->NodeSize=node_size;
	return t;
}


