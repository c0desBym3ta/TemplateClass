#include "header.h"
#include "Stack.h"

int main() {
	Stack<int> intStack(5);
	cout << "CREATING AND OPERATION TO INT STACK" << endl;
	cout << "-----------------------------------\n";
	int f = 3;
	cout << "Pushing elements on stack..." << endl;
	while (intStack.push(f)) {
		cout << f << " ";
		f *= 2;
	}
	cout << " . " << endl;

	cout << "Popping elements from stack..." << endl;
	while (intStack.pop(f)) {
		cout << f << " ";
	}
	cout << " . " << endl;

	cout << "\nCREATING AND OPERATION TO DOUBLE STACK" << endl;
	cout << "\n-----------------------------------" << endl;
	double i = 3;
	Stack<double> doubleStack(5);
	cout << "Pushing elements on stack..." << endl;
	while (doubleStack.push(i)) {
		cout << i << " ";
		f *= 2;
	}
	cout << " . " << endl;

	cout << "Popping elements from stack..." << endl;
	while (doubleStack.pop(i)) {
		cout << i << " ";
	}
	cout << " . " << endl;

}
