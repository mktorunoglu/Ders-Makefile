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

#define BST

int main(void){
#ifndef BST // ifdef olursa "Binary Search Tree" yazdırılır.
	bstree* a = bstnew();
	printf("Binary Search Tree\n");
#else
	linkedl* a = llnew();
	printf("Linked List\n");
#endif
	Ekle(a, 5);
	Ekle(a, 69);
	Ekle(a, 11);
	Ekle(a,2);
	a->max(a->ds);
	
	return 0;
}

