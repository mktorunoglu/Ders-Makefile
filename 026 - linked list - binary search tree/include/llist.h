#ifndef LLIST_H
#define LLIST_H

typedef struct LL {
	int key;
	struct LL *next;
} ll_t;

ll_t* llinit(int);
void llekle(ll_t* a, int k);
void llmax(ll_t* list);

#endif // LLIST_H

