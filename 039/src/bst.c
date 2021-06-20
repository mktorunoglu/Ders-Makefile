#include <stdlib.h>
#include <stdio.h>
#include "bst.h"
#include "api.h"

bstree* bstnew(void){
	bstree* tree = (bstree*)malloc(sizeof(data_st));
	tree->ds = NULL;
	tree->init = bstinit;
	tree->ekle = bstekle;
	tree->max = bstmax;
	tree->find = bstfind;
	return tree;
}

bst_t* bstinit(int key){
	bst_t* root = (bst_t*)malloc(sizeof(bst_t));
	root->key = key;
	root->left = NULL;
	root->right = NULL;
	return root;
}

bst_t* bstekle(bst_t* root, int key){
	if(root != NULL){
		if(root->key > key)
			root->left = bstekle(root->left, key);
		else if(root->key < key)
			root->right = bstekle(root->right, key);
		else
			printf("Eklenmek istenen anahtar mevcut!\n");
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

bst_t* bstfind(bst_t* root, int key){
	if(root == NULL)
		return NULL;
	else if (root->key < key)
		return bstfind(root->right, key);
	else if (root->key > key)
		return bstfind(root->left, key);
	else
		return root;
}

