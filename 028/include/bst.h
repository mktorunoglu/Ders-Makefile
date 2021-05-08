#ifndef BST_H
#define BST_H

typedef struct BST {
	int key;
	struct BST *left;
	struct BST *right;
} bst_t;

bst_t* bstinit(int);
bst_t* bstekle(bst_t* a, int k);
void bstmax(bst_t* tree);

#endif // BST_H

