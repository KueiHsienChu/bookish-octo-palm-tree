#include <iostream>
using namespace std;
int main(){
	cout << sizeof(double) << endl;
	cout << sizeof(char);
	//apply it to a type use ()
	//apply it to a variable, no () needed
	//sizeof is an operator, not a function
	int x;
	int i = sizeof x;
	cout << i;
	return 0;
}
