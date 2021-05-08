#include <stdio.h>
#include "bst.h"

int Ekle(bstree* b, int k){
	if (b->ds == NULL)
		b->ds = b->init(k);
	else
		b->ekle(b->ds, k);
	return 0;
}

int main(void){
	bstree* a = bstnew();
	printf("Binary Search Tree\n");
	Ekle(a, 5);
	Ekle(a, 69);
	Ekle(a, 11);
	Ekle(a,2);
	a->max(a->ds);
	return 0;
}

