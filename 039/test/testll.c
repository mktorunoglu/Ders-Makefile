#include <stdio.h>
#include "llist.h"
#include "api.h"

int main(void){
	data_st* s = new(linkedlist);
	printf("Linked List\n");
	ekle(s, 5);
	ekle(s, 6);
	ekle(s, 101);
	ekle(s, 2);
	dsmax(s);
	return 0;
}

