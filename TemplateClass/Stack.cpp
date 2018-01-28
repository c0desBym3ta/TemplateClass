#include "Stack.h"


template<typename T>
Stack<T>::Stack(int n){
	size = n > 0 ? n : 10;
	top = -1;
	stackPtr = new T[size];
}

template<typename T>
bool Stack<T>::push(const T& pushValue) {
	if (!isFull()) {
		stackPtr[++top] == pushValue;
		return true;
	}
	return false;
}

template<typename T>
bool Stack<T>::pop(T& popValue) {
	if (!isEmpty()) {
		popValue = stackPtr[top--];
		return true;
	}
	return false;
}