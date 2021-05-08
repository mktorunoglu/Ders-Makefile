#include <stdio.h>
#include "llist.h"
#include "bst.h"

int main(void){
	linkedl* a = llnew();
	a->list = a->init(5);
	a->ekle(a->list, 62);
	a->ekle(a->list, 11);
	a->ekle(a->list, 2);
	a->max(a->list);
	
	bst_t* t = bstinit(5);
	bstekle(t, 6);
	bstekle(t, 101);
	bstekle(t, 2);
	bstmax(t);
	
	return 0;
}

