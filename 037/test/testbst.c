#include <stdio.h>
#include "bst.h"
#include "api.h"

int main(void){
	data_st* s = new(bst);
	printf("Binary Search Tree\n");
	ekle(s, 5);
	ekle(s, 69);
	ekle(s, 11);
	ekle(s, 2);
	dsmax(s);
	printf("%d\n", find(s, 11));
	printf("%d\n", find(s, 3));
	return 0;
}

