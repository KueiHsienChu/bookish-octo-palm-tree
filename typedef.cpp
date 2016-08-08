#include <iostream>
using namespace std;
int main(){
	//syntax:
	//typedef existing-type-description alias-name

	typedef unsigned long ulong;

	// now compiler know ulong is unsigned long

	int* i, j;
	//only i is type int*

	typedef int* intPtr;
	intPtr x, y;
	//both x and y are of type int*

	return 0;
}
