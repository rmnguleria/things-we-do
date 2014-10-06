#include<iostream>
#include<map>
using namespace std;
struct node* Node;
struct node{
	int value;
	Node left,right;
};
Node addnewNode(int val){
	Node newNode = new node;
	newNode->value = val;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}
int main(){
	Node binaryTree = NULL;
	binaryTree = addnewNode(5);
	binaryTree->left = addnewNode(3);
	binaryTree->right = addnewNode(7);
	binaryTree->left->left = addnewNode(1);
	binaryTree->left->right = addnewNode(4);
	binaryTree->right->left = addnewNode(6);
	binaryTree->right->right = addnewNode(8);
	std::map<int, int> myMap;	
	return 0;
}
