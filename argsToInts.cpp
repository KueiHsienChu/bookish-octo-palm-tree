//converting command-line arguments to ints
#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[]){
	for(int i = 1; i < argc; i++)
		std::cout << argv[i] << std::endl;
	for(int i = 1; i < argc; i++)
		std::cout << std::atoi(argv[i]) << std::endl;
}
