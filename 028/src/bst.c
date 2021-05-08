#include <stdlib.h>
#include <stdio.h>
#include "bst.h"

bst_t* bstinit(int key){
	bst_t* root = (bst_t*)malloc(sizeof(bst_t));
	root->key = key;
	root->left = NULL;
	root->right = NULL;
	return root;
}

bst_t* bstekle(bst_t* root, int key){
	if(root != NULL){
		if(root->key > key){
			root->left = bstekle(root->left, key);
		} else {
			root->right = bstekle(root->right, key);
		}
		return root;
	} else {
		bst_t* new = malloc(sizeof(bst_t));
		new->key = key;
		new->left = NULL;
		new->right=NULL;
		return new;
	}
}

void bstmax(bst_t* root){
	bst_t* temp = root;
	while(temp->right != NULL){
		temp = temp->right;
	}
	printf("En büyük değer: %d\n", temp->key);
}

