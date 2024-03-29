/*

KVPY Summer Project 2013
Subproject 2 - Huffman Coding

Copyright 2013 Jay H. Bosamiya

*/

#include <iostream>
#include <iomanip>

#include "HuffmanCoder.h"

int main() {
	HuffmanCoder<2> hc2;
	HuffmanCoder<3> hc3;
	int N;
	float val[1000];
	std::cout << "Huffman Coder\n"
	             "-------------\n\n";
	std::cout << "Enter number of unique characters in the message: ";
	std::cin >> N;
	std::cout << "Enter relative frequency for character\n";
	for ( int i = 0 ; i < N ; i++ ) {
		std::cout << "\t" << std::setw(2) << i << " : ";
		std::cin >> val[i];
	}
	hc2.makeTree(N,val);
	hc3.makeTree(N,val);
	std::cout << "\n\n";
	std::cout << "+--------------+----------------------+----------------------+\n"
	          << "| Character    | Binary Encoding      | Ternary Encoding     |\n"
	          << "+--------------+----------------------+----------------------+\n";
	for ( int i = 0 ; i < N ; i++ ) {
		std::string s2,s3;
		hc2.getCode(i,s2);
		hc3.getCode(i,s3);

		std::cout << "| " << std::setw(12) << i << " | " << std::setw(20)
		          << s2 << " | " << std::setw(20) << s3 << " |\n";
	}
	std::cout << "+--------------+----------------------+----------------------+\n"
	          << "\n\nAverage length of encoding: \n\t" << hc2.averageLength()
			  << " for binary\n\t" << hc3.averageLength() << " for ternary\n";
	return 0;
}
