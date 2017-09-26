#include <iostream>
#include <forward_list>



void main() {
	std::forward_list<int> p1;
	std::cout << p1.max_size() << std::endl;
}