

#ifndef NODE______
#define NODE______

#include <iostream>

template <typename T>
class Node
{
public:
	Node(T item, Node<T> *next) : value(item), n(next) {};
	~Node(){};

	T &getValue() { return value; }
	Node *getNext() { return n; }

	void setValue(T nValue) { value = nValue; }
	void setNext(Node<T> *next) { n = next; }

private:
	T value;
	Node<T> *n;
};
#endif