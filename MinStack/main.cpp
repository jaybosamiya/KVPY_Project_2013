/*

KVPY Summer Project 2013
Subproject 1 - Linked List Implementation of a Stack with Constant Time Push, Pop, and Findmin

Copyright 2013 Jay H. Bosamiya

*/

#include <iostream>

#include "MinStack.h"

bool menu();

int main() {
	std::cout <<
		"MinStack\n"
		"--------\n\n"
		"Operations:\n"
		"\t[1] Push element\n"
		"\t[2] Top element\n"
		"\t[3] Pop element\n"
		"\t[4] Find min element\n"
		"\t[0] Exit\n"
		"\n\n";
	while(1) {
		if ( !menu() ) break;
	}
}

MinStack<int> ms;

bool menu() {
	int option, element;
	std::cout << "Please select operation: ";
	std::cin >> option;
	if ( option == 0 ) return false;
	if ( option < 0 || option > 4 ) {
		std::cerr << "Error in operation selection. Please retry.\n\n";
		return true;
	}
	switch (option) {
		case 1:
			std::cout << "Enter value to push: ";
			std::cin >> element;
			ms.push(element);
			std::cout << "Pushed " << element << ".\n\n";
			break;
		case 2:
			if ( ms.top(element) ) {
				std::cout << "Value on top of stack is " << element << ".\n\n";
			} else {
				std::cerr << "Error: Stack Underflow.\n\n";
			}
			break;
		case 3:
			if ( ms.top(element) ) {
				ms.pop();
				std::cout << "Value popped from stack is " << element << ".\n\n";
			} else {
				std::cerr << "Error: Stack Underflow.\n\n";
			}
			break;
		case 4:
			if ( ms.findMin(element) ) {
				std::cout << "Min value in stack is " << element << ".\n\n";
			} else {
				std::cerr << "Error: Stack Underflow.\n\n";
			}
			break;
	}
	return true;
}
