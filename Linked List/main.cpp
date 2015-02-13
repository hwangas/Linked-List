#include <iostream>
#include "LinkedList.h"

int main()
{
	LinkedList<int> list;

	for (int i = 0; i < 10; ++i)
		list.append(i);

	list.print();
	list.reverse();
	list.print();

	list.remove(5);
	list.print();

	list.remove(0);
	list.print();

	list.remove(9);
	list.print();

	std::cin.get();
	return 0;
}