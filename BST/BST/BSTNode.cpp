#include "BSTNode.h"
#include <cstddef>


template<typename T>
BSTNode<T>::BSTNode() :
	right(NULL),
	left(NULL)
{
	//this.right = NULL;
	//this.left = NULL;
}

template<typename T>
BSTNode<T>::BSTNode(T value) :
	value(value)
{
	BSTNode();
	//this.value = value;
}

template<typename T>
BSTNode<T>::BSTNode(T value, BSTNode<T> left) :
	value(value),
	left(left),
	right(NULL)
{

}

template<typename T>
BSTNode<T>::BSTNode(T value, BSTNode<T> left, BSTNode<T> right) :
	value(value),
	left(left),
	right(right)
{

}

template<typename T>
BSTNode<T>::~BSTNode()
{
	if (this.right != NULL)
	{
		delete this.right;
	}

	if (this.left != NULL)
	{
		delete this.left;
	}
}
