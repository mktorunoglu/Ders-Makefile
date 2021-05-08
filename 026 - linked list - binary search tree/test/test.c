#include <stdio.h>
#include "llist.h"
#include "bst.h"

int main(void){
	ll_t* a = llinit(5);
	llekle(a, 6);
	llekle(a, 11);
	llekle(a, 2);
	llmax(a);
	
	bst_t* t = bstinit(5);
	bstekle(t, 6);
	bstekle(t, 101);
	bstekle(t, 2);
	bstmax(t);
	
	return 0;
}

