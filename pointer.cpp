#include <iostream>

int main(){
	int* x = nullptr;
	int b = 3;
	x = &b;
	std::cout << "x : " << (long) x << "\n";
	std::cout << "&x : " << (long) &x << "\n";
	std::cout << "*x : " << *x << "\n";

	x = nullptr;
	return 0;
}


