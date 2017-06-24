#pragma once
template<typename T>
class BSTNode
{
public:
	BSTNode();
	BSTNode(T value);
	BSTNode(T value, BSTNode<T> left);
	BSTNode(T value, BSTNode<T> left, BSTNode<T> right);
	virtual ~BSTNode();



protected:
	T value;
	BSTNode<T> * right;
	BSTNode<T> * left;
};
