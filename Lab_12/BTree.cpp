#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "BTree.h"

using namespace std;

//constructor
BTree::BTree(){
	root = NULL;
}

//destructor
BTree::~BTree(){
	destroy_tree();
}

void BTree::insert(int key){
	//if not empty
	if(root!=NULL)
		insert(key, root);
	//if empty
	else{
		Node* temp = new Node();
		temp -> key_value = key;
		root = temp;
	}
}

Node *BTree:: search(int key){
	return search(key, root);
}

void BTree::destroy_tree(){
	destroy_tree(root);
}

Node *BTree::BTree_root(){
	return root;
}

void BTree::destroy_tree(Node *leaf){
	if(leaf != 0){
		destroy_tree(leaf -> left);
		destroy_tree(leaf -> right);
		delete(leaf);
	}
}

void BTree::insert(int key, Node *leaf){
	if(leaf == NULL)
		return;
	else if(key > leaf->key_value){
		insert(key, leaf->right);
		if(leaf->right==NULL){
			Node* temp = new Node();
			temp -> key_value = key;
			leaf->right = temp;
		}
	}
	else if(key < leaf->key_value){
		insert(key, leaf-> left);
		if(leaf ->left ==NULL){
			Node* temp = new Node();
			temp -> key_value = key;
			leaf -> left = temp;
		}
	}
}

Node *BTree::search(int key, Node *leaf){
	if(leaf != 0){
		if(key ==leaf -> key_value)
			return leaf;
		else if(key <leaf ->key_value)
			return search(key, leaf ->left);
		else
			return search(key, leaf -> right);
	}
	else
		return 0;
}

