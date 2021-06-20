#include <stdio.h>
#include "bst.h"
#include "api.h"

void test_has(void){
	data_st* s = new(bst);
	ekle(s, 1);
	if(find(s, 1))
		printf("Var olan bulundu.\n");
	else
		printf("Hata 1!\n");

	if(!find(s, 2))
		printf("Hata! Var olmayan bulundu.\n");
	else
		printf("Hata 2!\n");
}

void test_rep(void){
	int r = 0;
	data_st* s = new(bst);
	printf("Binary Search Tree\nVar olan eleman ekleme\n");
	r |= ekle(s, 5);
	r |= ekle(s, 5);
	if(r)
		printf("Var olan anahtar eklenmeye çalışıldı.\n");
}

int main(void){
	test_has();
	test_rep();
	return 0;
}

