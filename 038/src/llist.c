#include <stdlib.h>
#include <stdio.h>
#include "llist.h"
#include "api.h"

linkedl* llnew(void){
	linkedl *ll = (linkedl*)malloc(sizeof(data_st));
	ll->ds = NULL;
	ll->init = llinit;
	ll->ekle = llekle;
	ll->max = llmax;
	return ll;
}

ll_t* llinit(int key){
	ll_t* new = (ll_t*)malloc(sizeof(ll_t));
	new->key = key;
	new->next = NULL;
	return new;
}

void llekle(ll_t* list, int key){
	ll_t* temp = list;
	while(temp->next != NULL)
		temp = temp->next;
	ll_t* new = malloc(sizeof(ll_t));
	new->key = key;
	new->next = NULL;
	temp->next = new;
}

void llmax(ll_t* list){
	ll_t* temp = list;
	int k = temp->key;
	while(temp != NULL){
		if(k < temp->key)
			k = temp->key;
		temp = temp->next;
	}
	printf("En büyük değer: %d\n", k);
}

