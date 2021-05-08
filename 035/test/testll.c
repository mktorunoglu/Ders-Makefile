#include <stdio.h>
#include "llist.h"

enum dtype{linkedlist=0, bst}; // şuan bst'nin değeri 1'dir.
// linkedlist 1'den başlatılırsa bst'nin değeri 2 olur.
// Bu ifadenin karşılığı aşağıdaki gibidir:
//
// define linkedlist 0
// define bst 1

int Ekle(linkedl* l, int k, enum dtype x){
	if(x != 0){
		printf("Hata!\n");
		return 1;
	}
	
	if (l->ds == NULL)
		l->ds = l->init(k);
	else
		l->ekle(l->ds, k);
		
	return 0;
}

int main(void){
	int xorhash = 3;
	enum dtype ds = xorhash;
	printf("%d\n", ds);
	
	ds = linkedlist;
	printf("%d\n", ds);
	
	printf("%d\n", bst);
	
	linkedl* a = llnew();
	printf("Linked List %d\n", linkedlist);
	Ekle(a, 5, bst);
	Ekle(a, 69, linkedlist);
	Ekle(a, 11, linkedlist);
	Ekle(a, 2, bst);
	a->max(a->ds);
	return 0;
}

