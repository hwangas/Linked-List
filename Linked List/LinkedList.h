
#ifndef LINKEDLIST______
#define LINKEDLIST______
#include "Node.h"

template <typename T>
class LinkedList
{
public:
	LinkedList() : head(nullptr) {};
	~LinkedList() {
		while (head != nullptr) {
			remove(head->getValue());
		}
	}
	void append(T item) {
		Node<T> *tmp = new Node<T>(item, head);
		head = tmp;
	}
	void remove(T item) {
		if (head == nullptr) return;
		if (head->getValue() == item) {
			Node<T> *t = head;
			head = head->getNext();
			delete t;
			return;
		}

		Node<T> *cur = head;
		Node<T> *prev = head;
		while (cur != nullptr && cur->getValue() != item) {
			prev = cur;
			cur = cur->getNext();
		}

		if (cur == nullptr) {
			std::cout << "was not found in the linked list" << std::endl;
		}
		else {
			prev->setNext(cur->getNext());
			delete cur;
		}		
	}

	void reverse()
	{
		Node<T> *tmp = reverseHelper(head);
		tmp->setNext(nullptr);
	}

	Node<T> *reverseHelper(Node<T> *cur)
	{
		if (cur->getNext() == nullptr) {
			head = cur;
			return cur;
		}
		reverseHelper(cur->getNext())->setNext(cur);
		return cur;
	}

	void print()
	{
		Node<T> *tmp = head;
		while (tmp != nullptr) {
			std::cout << tmp->getValue() << " ";
			tmp = tmp->getNext();
		}
		std::cout << "\n";
	}

private:
	Node<T> *head;
};


#endif