#include "BSTree.h"

int main() {
	BST tTree;
	tTree.insertNode("50",tTree.getRoot());
	tTree.insertNode("40",tTree.getRoot());
	tTree.insertNode("60",tTree.getRoot());
	tTree.insertNode("30",tTree.getRoot());
	tTree.insertNode("35",tTree.getRoot());
	tTree.insertNode("55",tTree.getRoot());

	tTree.inOrderTraversal(tTree.getRoot());
	return 0;
}