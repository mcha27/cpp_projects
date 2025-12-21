#include <iostream>
using namespace std;

int main(){
	int value = 10;
	int* ptr = &value;
	cout << "value: " << value << endl;
	cout << "&value: " << &value << endl;
	cout << "ptr: " << ptr << endl;
	cout << "*ptr: " << *ptr << endl;
	
	cout << "========"<< endl;
	*ptr += 10;
	cout << "*ptr + 10: " << *ptr << endl;
	cout << "updated ptr: " << ptr << endl;
	cout << "updated value: " << value << endl;
	return 0;
}
