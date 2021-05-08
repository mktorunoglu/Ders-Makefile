#include <stdio.h>
#include "llist.h"

int Ekle(linkedl* l, int k){
	if (l->ds == NULL)
		l->ds = l->init(k);
	else
		l->ekle(l->ds, k);
	return 0;
}

int main(void){
	linkedl* a = llnew();
	printf("Linked List\n");
	Ekle(a, 5);
	Ekle(a, 69);
	Ekle(a, 11);
	Ekle(a,2);
	a->max(a->ds);
	return 0;
}

