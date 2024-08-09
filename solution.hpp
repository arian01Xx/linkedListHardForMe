#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include "tree.hpp"

using namespace std;

class Solution{
public:
	void flatten(TreeNode* root){
		while(root!=nullptr){
			if(!root->left){
				root=root->right;
			}else{
				TreeNode* current=root->left;
				while(current->right!=nullptr){
					//current comienza apuntando a la derecha, con while
					//sigue moviendose hacia la derecha hasta que encuentra
					//el ultimo nodo de ese arbol
					current=current->right;
				}
				current->right=root->right;
				root->right=root->left; //se convierte en subarbol derecho
				root->left=nullptr; //se elimina izquierdo
				root=root->right;
			}
		}
	}
/*
Input: root = [1,2,5,3,4,null,6]
Output: [1,null,2,null,3,null,4,null,5,null,6]
*/
};

#endif