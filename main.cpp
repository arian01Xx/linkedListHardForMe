#include "tree.hpp"
#include "solution.hpp"
#include "created.hpp"
#include "print.hpp"

using namespace std;

int main(){
	vector<int> root={1,2,5,3,5,-1,6};
	Solution solution;
	TreeNode* input=createdTreeNode(root);

	cout<<"Original TreeNode: "<<endl;
	printTree(input);
	cout<<endl;

	solution.flatten(input);
	cout<<"Flattened Tree: "<<endl;
	printTree(input);
	cout<<endl;
	cout<<endl;

	return 0;
}