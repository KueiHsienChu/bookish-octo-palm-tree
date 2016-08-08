#include <iostream>

int main(){
	void* vp;
	char c;
	int i;
	float f;
	double d;
	// the address of ANT type can be 
	// assigned to a void pointer:
	vp = &c;
	vp = &i;
	vp = &f;
	vp = &d;

	// can't dereference a void pointer:
	// *vp = 3; //compile time error
	// must cast back to int before dereferencing:
	*((int*)vp) = 3;
	std::cout << *(int*)vp;
}
