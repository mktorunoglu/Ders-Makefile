#include <stdio.h>
#include "llist.h"
#include "bst.h"

#define Ekle(X,Y) _Generic((X), \
	linkedl*: eklel, \
	bstree*: ekleb \
	)(X,Y)

int eklel(linkedl* l, int k){
	if (l->ds == NULL)
		l->ds = l->init(k);
	else
		l->ekle(l->ds, k);
	return 0;
}

int ekleb(bstree* b, int k){
	if (b->ds == NULL)
		b->ds = b->init(k);
	else
		b->ekle(b->ds, k);
	return 0;
}

int main(void){
	linkedl* a = llnew();
	Ekle(a, 5);
	Ekle(a, 69);
	Ekle(a, 11);
	Ekle(a,2);/*
	a->max(a->ds);
	
	bstree* t = bstnew();
	Ekle(t, 5);
	Ekle(t, 6);
	Ekle(t, 101);
	Ekle(t, 2);*/
	a->max(a->ds);
	
	return 0;
}

