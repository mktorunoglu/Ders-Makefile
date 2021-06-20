#ifndef BST_H
#define BST_H

typedef struct BST {
	int key;
	struct BST *left;
	struct BST *right;
} bst_t;

typedef struct BSTree {
	bst_t* ds;
	bst_t* (*init)();
	bst_t* (*ekle)();
	bst_t* (*find)();
	void (*max)();
} bstree;

bstree* bstnew(void);
bst_t* bstinit(int);
bst_t* bstekle(bst_t* a, int k);
void bstmax(bst_t* tree);
bst_t* bstfind(bst_t* root, int key);

#endif // BST_H

