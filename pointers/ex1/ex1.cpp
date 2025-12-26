#include <iostream>
using namespace std;

int main(){
	int a, b;
	cout << "enter integer a: ";
	cin >> a;
	cout << "enter integer b: ";
	cin >> b;
	int* ptrA = &a;
	int* ptrB = &b;
	cout << "ptrA: " << *ptrA << endl;
	cout << "ptrB: " << *ptrB << endl;
	return 0;
}
