#include <stdio.h>
#include "llist.h"
#include "bst.h"

int eklel(linkedl* l, int k){
	if (l->list == NULL)
		l->list = l->init(k);
	else
		l->ekle(l->list, k);
	return 0;
}

int main(void){
	linkedl* a = llnew();
	/*
	a->list = a->init(5);
	a->ekle(a->list, 62);
	a->ekle(a->list, 11);
	a->ekle(a->list, 2);
	a->max(a->list);
	*/
	
	eklel(a, 5);
	eklel(a, 69);
	eklel(a, 11);
	eklel(a,2);
	a->max(a->list);
	
	bst_t* t = bstinit(5);
	bstekle(t, 6);
	bstekle(t, 101);
	bstekle(t, 2);
	bstmax(t);
	
	return 0;
}

