#ifndef CREATED_HPP
#define CREATED_HPP

#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include "tree.hpp"

using namespace std;

TreeNode* createdTreeNode(vector<int> nodes){
	if(nodes.empty()) return nullptr;

	TreeNode* root=new TreeNode(nodes[0]);
	queue<TreeNode*> q;
	q.push(root);
	int i=1;

	while(i < nodes.size()){
		TreeNode* current=q.front();
		q.pop();
		//crear el hijo izquierdo
		if(nodes[i]!=-1){
			current->left=new TreeNode(nodes[i]);
			q.push(current->left);
		}
		i++;
		//crear el hijo derecho
		if(i < nodes.size() && nodes[i] != -1){
			current->right=new TreeNode(nodes[i]);
			q.push(current->right);
		}
		i++;
	}
	return root;
}

#endif