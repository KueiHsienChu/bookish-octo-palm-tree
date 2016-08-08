#include <iostream>

using namespace std;

void func(){
	static int i = 0;
	// static variables can't be changed outside the scope
	// localizes the errors
	// "remembers" the info between function calls
	cout << "i = " << ++i << endl;
}

int main(){
	for(int x=0;x<10;x++)
		func();
	return 0;
}

	
