#ifndef PRINT_HPP
#define PRINT_HPP

#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include "tree.hpp"

using namespace std;

void printTree(TreeNode* root){
	if(root==nullptr) return;
	cout<<root->val<<" ";  // imprime el valor del nodo actual
	printTree(root->left); // recorre el subarbol izquierdo
	printTree(root->right);// recorre el subarbol derecho
}

#endif